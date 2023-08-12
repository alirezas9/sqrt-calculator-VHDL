LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY X_tb IS
END X_tb;
 
ARCHITECTURE behavior OF X_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT X
    PORT(
         A : IN  std_logic_vector(4 downto 0);
         Pi : IN  std_logic_vector(1 downto 0);
         Di : IN  std_logic;
         R : OUT  std_logic_vector(4 downto 0);
         Co : OUT  std_logic_vector(1 downto 0);
         Do : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(4 downto 0) := (others => '0');
   signal Pi : std_logic_vector(1 downto 0) := (others => '0');
   signal Di : std_logic := '0';

 	--Outputs
   signal R : std_logic_vector(4 downto 0);
   signal Co : std_logic_vector(1 downto 0);
   signal Do : std_logic_vector(1 downto 0);
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: X PORT MAP (
          A => A,
          Pi => Pi,
          Di => Di,
          R => R,
          Co => Co,
          Do => Do
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 10 ns.
      wait for 10 ns;
		for i in 0 to 31 loop
			A <= std_logic_vector(to_Unsigned(i,5));
			for j in 0 to 3 loop
				Pi <= std_logic_vector(to_Unsigned(j,2));
				for k in std_logic range '0' to '1' loop
						Di <= k;
						wait for 10 ns;
				end loop;
			end loop;
		end loop;

      wait;
   end process;

END;
