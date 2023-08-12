LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY Y_tb IS
END Y_tb;
 
ARCHITECTURE behavior OF Y_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT y
    PORT(
         A11 : IN  std_logic;
         A12 : IN  std_logic;
         A22 : IN  std_logic;
         CI1 : IN  std_logic;
         CI2 : IN  std_logic;
         DI1 : IN  std_logic;
         DI2 : IN  std_logic;
         PI1 : IN  std_logic;
         PI2 : IN  std_logic;
         S11 : OUT  std_logic;
         CO1 : OUT  std_logic;
         CO2 : OUT  std_logic;
         PO1 : OUT  std_logic;
         PO2 : OUT  std_logic;
         DO1 : OUT  std_logic;
         DO2 : OUT  std_logic;
         S21 : OUT  std_logic;
         S22 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A11 : std_logic := '0';
   signal A12 : std_logic := '0';
   signal A22 : std_logic := '0';
   signal CI1 : std_logic := '0';
   signal CI2 : std_logic := '0';
   signal DI1 : std_logic := '0';
   signal DI2 : std_logic := '0';
   signal PI1 : std_logic := '0';
   signal PI2 : std_logic := '0';

 	--Outputs
   signal S11 : std_logic;
   signal CO1 : std_logic;
   signal CO2 : std_logic;
   signal PO1 : std_logic;
   signal PO2 : std_logic;
   signal DO1 : std_logic;
   signal DO2 : std_logic;
   signal S21 : std_logic;
   signal S22 : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
	
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: y PORT MAP (
          A11 => A11,
          A12 => A12,
          A22 => A22,
          CI1 => CI1,
          CI2 => CI2,
          DI1 => DI1,
          DI2 => DI2,
          PI1 => PI1,
          PI2 => PI2,
          S11 => S11,
          CO1 => CO1,
          CO2 => CO2,
          PO1 => PO1,
          PO2 => PO2,
          DO1 => DO1,
          DO2 => DO2,
          S21 => S21,
          S22 => S22
        );
		  
   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 10 ns;	

			for i in std_logic range '0' to '1' loop
				A11 <= i;
				for j in std_logic range '0' to '1' loop
					A12 <= j;
					for k in std_logic range '0' to '1' loop
						A22 <= k;
						for l in std_logic range '0' to '1' loop
							CI1 <= l;
							for m in std_logic range '0' to '1' loop
								CI2 <= m;
								for n in std_logic range '0' to '1' loop
									DI1 <= n;
									for o in std_logic range '0' to '1' loop
										DI2 <= o;
										for p in std_logic range '0' to '1' loop
											PI1 <= p;
											for q in std_logic range '0' to '1' loop
												PI2 <= q;
												wait for 10 ns;
											end loop;
										end loop;
									end loop;
								end loop;
							end loop;
						end loop;
					end loop;
				end loop;
			end loop;
      -- insert stimulus here 
		

      wait;
   end process;

END;
