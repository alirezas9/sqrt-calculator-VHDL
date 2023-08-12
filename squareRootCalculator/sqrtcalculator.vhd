library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity sqrtcalculator is
    Port ( a : in  STD_LOGIC_VECTOR (15 downto 0);
           q : out  STD_LOGIC_VECTOR (7 downto 0));
end sqrtcalculator;

architecture Behavioral of sqrtcalculator is
-- components
component X
    Port ( A : in  STD_LOGIC_VECTOR (4 downto 0);
           Pi : in  STD_LOGIC_VECTOR (1 downto 0);
           Di : in  STD_LOGIC;
           R : out  STD_LOGIC_VECTOR (4 downto 0);
           Co : out  STD_LOGIC_VECTOR (1 downto 0);
           Do : out  STD_LOGIC_VECTOR (1 downto 0));
end component;

component y
    Port ( A11 ,A12 ,A22 ,CI1 ,CI2 ,DI1 ,DI2 ,PI1 ,PI2 : in  STD_LOGIC;
           S11 ,CO1 ,CO2 ,PO1 ,PO2 ,DO1 ,DO2 ,S21 ,S22 : out  STD_LOGIC);
end component;

signal t :std_logic_vector(29 downto 0);
signal s :std_logic_vector(26 downto 0);
signal q0, q1, q2, q3, q4, q5, q6 :std_logic;
signal o :std_logic_vector(24 downto 0); 		-- for nc and unused signals
begin

X1 :X port map(   A(0) => '1',
						A(1) => a(15),
						A(2) => a(14),
						A(3) => a(13),
						A(4) => a(12),
						Pi(0) => '1',
						Pi(1) => q0,
						Di => '0',
						R(0) => o(0),
						R(1) => o(1),
						R(2) => s(2),
						R(3) => s(3),
						R(4) => s(4),
						Co(0) => q0,
						Co(1) => q1,
						Do(0) => s(0),
						Do(1) => s(1)
						);
						
Y1 :y port map(   A11 => s(2), 
						A12 => s(3),
						A22 => t(2),
						CI1 => t(1),
						CI2 => t(4),
						DI1 => s(0),
						DI2 => s(1),
						PI1 => q1,
						PI2 => q2,
						S11 => o(2),
						CO1 => q2,
						CO2 => q3,
						PO1 => t(0),
						PO2 => t(3),
						DO1 => s(5),
						DO2 => s(6),
						S21 => o(3),
						S22 => s(7)						
						);

X2 :X port map(   A(0) => s(4),
						A(1) => a(11),
						A(2) => a(10),
						A(3) => a(9),
						A(4) => a(8),
						Pi(0) => t(0),
						Pi(1) => t(3),
						Di => t(0),
						R(0) => t(2),
						R(1) => s(9),
						R(2) => s(11),
						R(3) => s(12),
						R(4) => s(13),
						Co(0) => t(1),
						Co(1) => t(4),
						Do(0) => s(8),
						Do(1) => s(10)
						);	


Y2 :y port map(    A11 => s(7), 
						A12 => s(9),
						A22 => t(7),
						CI1 => t(6),
						CI2 => t(9),
						DI1 => s(5),
						DI2 => s(6),
						PI1 => q3,
						PI2 => q4,
						S11 => o(4),
						CO1 => q4,
						CO2 => q5,
						PO1 => t(5),
						PO2 => t(8),
						DO1 => s(14),
						DO2 => s(15),
						S21 => o(5),
						S22 => s(16)						
						);		

Y3 :y port map(   A11 => s(11), 
						A12 => s(12),
						A22 => t(12),
						CI1 => t(11),
						CI2 => t(14),
						DI1 => s(8),
						DI2 => s(10),
						PI1 => t(5),
						PI2 => t(8),
						S11 => t(7),
						CO1 => t(6),
						CO2 => t(9),
						PO1 => t(10),
						PO2 => t(13),
						DO1 => s(17),
						DO2 => s(19),
						S21 => s(18),
						S22 => s(20)						
						);	

X3 :X port map(   A(0) => s(13),
						A(1) => a(7),
						A(2) => a(6),
						A(3) => a(5),
						A(4) => a(4),					
						Pi(0) => t(10),
						Pi(1) => t(13),
						Di => t(10),
						R(0) => t(12),
						R(1) => s(22),
						R(2) => s(24),
						R(3) => s(25),
						R(4) => s(26),
						Co(0) => t(11),
						Co(1) => t(14),
						Do(0) => s(21),
						Do(1) => s(23)
						);

Y4 :y port map(   A11 => s(16), 
						A12 => s(18),
						A22 => t(17),
						CI1 => t(16),
						CI2 => t(19),
						DI1 => s(14),
						DI2 => s(15),
						PI1 => q5,
						PI2 => q6,
						S11 => o(6),
						CO1 => q6,
						CO2 => q(0),	--q0
						PO1 => t(15),
						PO2 => t(18),
						DO1 => o(7),
						DO2 => o(8),
						S21 => o(9),
						S22 => o(10)			
						);	
													
Y5 :y port map(   A11 => s(20), 
						A12 => s(22),
						A22 => t(22),
						CI1 => t(21),
						CI2 => t(24),
						DI1 => s(17),
						DI2 => s(19),
						PI1 => t(15),
						PI2 => t(18),
						S11 => t(17),
						CO1 => t(16),
						CO2 => t(19),
						PO1 => t(20),
						PO2 => t(23),
						DO1 => o(11),
						DO2 => o(12),	-- we dont require R outputs
						S21 => o(13),
						S22 => o(14)			
						);	
						
Y6 :y port map(   A11 => s(24), 
						A12 => s(25),
						A22 => t(27),
						CI1 => t(26),
						CI2 => t(29),
						DI1 => s(21),
						DI2 => s(23),
						PI1 => t(20),
						PI2 => t(23),
						S11 => t(22),
						CO1 => t(21),
						CO2 => t(24),
						PO1 => t(25),
						PO2 => t(28),
						DO1 => o(15),
						DO2 => o(16),	-- we dont require R outputs
						S21 => o(17),
						S22 => o(18)				
						);
						
X4 :X port map(   A(0) => s(26),
						A(1) => a(3),
						A(2) => a(2),
						A(3) => a(1),
						A(4) => a(0),
						Pi(0) => t(25),
						Pi(1) => t(28),
						Di => t(25),
						R(0) => t(27),
						R(1) => o(19),
						R(2) => o(20),
						R(3) => o(21),
						R(4) => o(22),
						Co(0) => t(26),
						Co(1) => t(29),
						Do(0) => o(23),
						Do(1) => o(24)
						);
						

q(1) <= q6;
q(2) <= q5;
q(3) <= q4;
q(4) <= q3;
q(5) <= q2;
q(6) <= q1;
q(7) <= q0;
						
end Behavioral;

