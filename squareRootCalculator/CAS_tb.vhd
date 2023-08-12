LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY CAS_tb IS
END CAS_tb;
 
ARCHITECTURE behavior OF CAS_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CAS
    PORT(
         Di : IN  std_logic;
         Pi : IN  std_logic;
         X : IN  std_logic;
         Cin : IN  std_logic;
         Do : OUT  std_logic;
         Po : OUT  std_logic;
         R : OUT  std_logic;
         Cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Di : std_logic := '0';
   signal Pi : std_logic := '0';
   signal X : std_logic := '0';
   signal Cin : std_logic := '0';

 	--Outputs
   signal Do : std_logic;
   signal Po : std_logic;
   signal R : std_logic;
   signal Cout : std_logic;

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CAS PORT MAP (
          Di => Di,
          Pi => Pi,
          X => X,
          Cin => Cin,
          Do => Do,
          Po => Po,
          R => R,
          Cout => Cout
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
						
			for i in std_logic range '0' to '1' loop
				Di <= i;
				for j in std_logic range '0' to '1' loop
					Pi <= j;
					for k in std_logic range '0' to '1' loop
						X <= k;
						for l in std_logic range '0' to '1' loop
							Cin <= l;
							wait for 50 ns;
						end loop;
					end loop;
				end loop;
			end loop;


      wait;
   end process;

END;
