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

entity comparator is
    Port ( clk : in STD_LOGIC;
			  inp_a : in  signed(15 downto 0);
           inp_b : in  signed(15 downto 0);
			  sel : in  STD_LOGIC_VECTOR(2 downto 0);
           out_comp : out STD_LOGIC);
end comparator;

architecture Behavioral of comparator is
    begin
      process(inp_a, inp_b, sel, clk)
      begin
			if falling_edge(clk) then 
				out_comp <= '0';
				 case sel is
					when "000" => 
						if(inp_a = inp_b) then
							out_comp <= '1'; -- a equals b
						end if;
					when "001" => 
					  if (inp_a /= inp_b) then
							out_comp <= '1'; -- a not equal to b
					  end if;
					when "010" =>
					  if (inp_a > inp_b) then
							out_comp <= '1'; -- a greater than b
					  end if;
					when "011" => 
					  if (inp_a >= inp_b) then
							out_comp <= '1'; -- a greater or equal to b
					  end if;
					when "100" => 
					  if (inp_a < inp_b) then
							out_comp <= '1'; -- a less than b
					  end if;
					when "101" => 
					  if (inp_a <= inp_b) then
							out_comp <= '1'; -- a less than or equal to b
					  end if;		
					when others =>
					NULL;
				end case;
			end if;
		end process;
end Behavioral;
