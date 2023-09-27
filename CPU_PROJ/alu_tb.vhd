LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;


ENTITY alu_tb IS
END alu_tb;

ARCHITECTURE behaviour OF alu_tb IS

	signal clk : std_logic := '0';
	signal inp_a,inp_b,out_alu : signed(15 downto 0) := (others => '0');
	signal sel : std_logic_vector(3 downto 0) := (others => '0');
	constant CLK_period : time := 10 ns;
	
BEGIN

	uut: entity work.alu PORT MAP (
		clk => clk,
		inp_a => inp_a,
		inp_b => inp_b,
		sel => sel,
		out_alu => out_alu
		);
		
		-- Clock process definitions
		
		clk_process :process
		begin
			clk <= '0';
			wait for Clk_period/2;
			clk <= '1';
			wait for Clk_period/2;
		end process;
		
		
		-- Stimulate process
		stim_process: process
		begin
			wait for Clk_period*1;
			inp_a <= "0000000100000001";
			inp_b <= "0000000100000000";
			sel <= "0000" ; wait for Clk_period;
			sel <= "0001" ; wait for Clk_period;
			sel <= "0010" ; wait for Clk_period;
			sel <= "0011" ; wait for Clk_period;
			sel <= "0100" ; wait for Clk_period;
			sel <= "0101" ; wait for Clk_period;
			sel <= "0111" ; wait for Clk_period;
			sel <= "1000" ; wait for Clk_period;
			sel <= "1001" ; wait for Clk_period;
			sel <= "1001" ; wait for Clk_period;
			sel <= "1010" ; wait for Clk_period;
			sel <= "1011" ; wait for Clk_period;
			sel <= "1100" ; wait for Clk_period;
			sel <= "1101" ; wait for Clk_period;
			sel <= "1110" ; wait for Clk_period;
			sel <= "1111" ; wait for Clk_period;
			
			
		wait;
		
	end process;
	
END;