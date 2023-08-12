library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CAS is
    Port ( PI,DI,X,Cin : in  STD_LOGIC;
           PO,DO,R,Cout : out  STD_LOGIC);
end CAS;

architecture Behavioral of CAS is

component FA 
    Port ( A,B,Cin : in  STD_LOGIC;
           S,Cout : out  STD_LOGIC);
end component;

signal t0: STD_LOGIC;

begin

t0 <= PI XOR DI;

FA1 : FA port map(t0, X, Cin , R, Cout);

Do <= Di;
Po <= Pi;

end Behavioral;

