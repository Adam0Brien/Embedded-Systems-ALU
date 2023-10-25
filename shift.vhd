----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:34:40 09/21/2023 
-- Design Name: 
-- Module Name:    shift - Behavioral 
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

entity shift is
    Port ( clk : in STD_LOGIC;
			  sel : in  STD_LOGIC_VECTOR(3 downto 0);
           inp_a : in  STD_LOGIC_VECTOR(15 downto 0);
           out_shift : out  STD_LOGIC_VECTOR(15 downto 0));
end shift;

architecture Behavioral of shift is
    begin
    
      process(inp_a, sel, clk)
      begin
        if falling_edge(clk) then 
          case sel is
            when "000" => 
              out_shift <= inp_a; -- shiftPass
            when "001" =>
              out_shift <= shift_left(inp_a,1); -- Shift Left
            when "010" =>
              out_shift <= shift_right(inp_a,1); -- Shift Right
            when "011" =>
              out_shift <= inp_a;
            when "100" =>
              out_shift <= inp_a;
            when others =>
              NULL;
          end case;
        end if;
      end process;
end Behavioral;
