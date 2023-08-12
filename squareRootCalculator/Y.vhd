library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity y is
    Port ( A11 ,A12 ,A22 ,CI1 ,CI2 ,DI1 ,DI2 ,PI1 ,PI2 : in  STD_LOGIC;
           S11 ,CO1 ,CO2 ,PO1 ,PO2 ,DO1 ,DO2 ,S21 ,S22 : out  STD_LOGIC);
end y;

architecture Behavioral of y is

component CAS
    Port ( Di, Pi, X, Cin : in  STD_LOGIC;
           Do, Po, R, Cout : out  STD_LOGIC);
end component;

signal 	T0, T1, C0, C1, S0:STD_LOGIC;
signal d1 ,d2:STD_LOGIC;
begin

d1 <= DI1;
d2 <= DI2;
--CAS ports(di , pi , x , cin ,
--				 do ,po , r , co );

CAS_i :CAS port map (DI2 ,T0 ,A12 ,CI1 ,
						  OPEN ,PO1 ,S0 ,C0);
							
CAS_j :CAS port map (DI1 ,PI2 ,S0 ,C1 ,
							OPEN, T1 ,S21 ,CO2);

CAS_k :CAS port map (DI2 ,T1 ,A22 ,CI2 ,
							OPEN , PO2 ,S22 ,C1);

CAS_h :CAS port map (DI1 ,PI1 ,A11 ,C0 ,
							OPEN ,T0 ,S11 ,CO1);
DO1 <= d1;
DO2 <= d2;					
end Behavioral;

