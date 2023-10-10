----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:34:40 09/21/2023 
-- Design Name: 
-- Module Name:    alu - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity alu is
    Port ( clk : in STD_LOGIC;
			  sel : in  STD_LOGIC_VECTOR(3 downto 0);
           inp_a : in  signed(15 downto 0);
           inp_b : in  signed(15 downto 0);
           out_alu : out  signed(15 downto 0));
end alu;

architecture Behavioral of alu is
    begin
    
      process(inp_a, inp_b, sel, clk)
      begin
        if falling_edge(clk) then 
          case sel is
            when "0000" => 
              out_alu <= inp_a; -- alupassOp
            when "0001" => 
              out_alu <= inp_a and inp_b; -- andOp
            when "0010" =>
              out_alu <= inp_a or inp_b; -- orOp
            when "0011" =>
              out_alu <= not inp_a; -- notOp
            when "0100" =>
              out_alu <= inp_a xor inp_b; -- xorOp
            when "0101" =>
              out_alu <= inp_a + inp_b; -- plusOp
            when "0110" =>
              out_alu <= inp_a - inp_b; -- minusOp
            when "0111" =>
              out_alu <= inp_a + 1; -- incOp
            when "1000" =>
              out_alu <= inp_a - 1; -- decOp
            when "1001" =>
              out_alu <= "0000000000000000"; -- clearOp
            when others =>
              NULL;
          end case;
        end if;
      end process;
end Behavioral;
