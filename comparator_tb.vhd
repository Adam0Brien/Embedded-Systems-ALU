--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:02:35 10/25/2023
-- Design Name:   
-- Module Name:   C:/Users/20093460/Downloads/Embedded-Systems-ALU-main/Embedded-Systems-ALU-main/CPU_PROJ/comparator_tb.vhd
-- Project Name:  CPU_PROJ
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: comparator
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE IEEE.NUMERIC_STD.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY comparator_tb IS
END comparator_tb;
 
ARCHITECTURE behavior OF comparator_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT comparator
    PORT(
         clk : IN  std_logic;
         inp_a : IN  signed(15 downto 0);
         inp_b : IN  signed(15 downto 0);
         sel : IN  std_logic_vector(2 downto 0);
         out_comp : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal inp_a : signed(15 downto 0) := (others => '0');
   signal inp_b : signed(15 downto 0) := (others => '0');
   signal sel : std_logic_vector(2 downto 0) := (others => '0');

 	--Outputs
   signal out_comp : std_logic;

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.comparator PORT MAP (
          clk => clk,
          inp_a => inp_a,
          inp_b => inp_b,
          sel => sel,
          out_comp => out_comp
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for Clk_period/2;
		clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin
      wait for clk_period*1;
			inp_a <= "0000000100000001"; -- bigger
			inp_b <= "0000000100000001"; -- smaller
			sel <= "000" ; wait for Clk_period; -- 0
			sel <= "001" ; wait for Clk_period;
			sel <= "010" ; wait for Clk_period;
			sel <= "011" ; wait for Clk_period;
			sel <= "100" ; wait for Clk_period;
			sel <= "101" ; wait for Clk_period;
      wait;
   end process;

END;
