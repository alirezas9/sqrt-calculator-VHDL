LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use IEEE.numeric_std.ALL;

ENTITY sqrtcalc_tb IS
END sqrtcalc_tb;
 
ARCHITECTURE behavior OF sqrtcalc_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sqrtcalculator
    PORT(
         a : IN  std_logic_vector(15 downto 0);
         q : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal q : std_logic_vector(7 downto 0);
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sqrtcalculator PORT MAP (
          a => a,
          q => q
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 10 ns;	

      -- insert stimulus here 
		for i in 1 to 127 loop
				a <= std_logic_vector(to_Unsigned(i*i,16));
				wait for 10 ns;
		end loop;

      wait;
   end process;

END;
