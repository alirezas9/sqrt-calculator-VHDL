library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity X is
    Port ( A : in  STD_LOGIC_VECTOR (4 downto 0);
           Pi : in  STD_LOGIC_VECTOR (1 downto 0);
           Di : in  STD_LOGIC;
           R : out  STD_LOGIC_VECTOR (4 downto 0);
           Co : out  STD_LOGIC_VECTOR (1 downto 0);
           Do : out  STD_LOGIC_VECTOR (1 downto 0));
end X;

architecture Behavioral of X is
component CAS
    Port ( Di, Pi, X, Cin : in  STD_LOGIC;
           Do, Po, R, Cout : out  STD_LOGIC);
end component;

signal c:STD_LOGIC_VECTOR(5 downto 1);
signal s:STD_LOGIC_VECTOR(1 downto 0);
signal p:STD_LOGIC_VECTOR(6 downto 0);

signal one:STD_LOGIC;
signal np0, np4:STD_LOGIC;

begin
ONE <= '1' ;
np0 <= not p(0);
np4 <= not p(4);

--CAS ports(di , pi , x , cin ,
--				 do ,po , r , co );
CAS_a :CAS port map (pi(0), pi(0), A(0), c(1),
							open , p(0), R(0), Co(0));
							
CAS_b :CAS port map (np0 , p(0), A(1), c(2),
						   open, p(1), s(1) , c(1));
						 
CAS_c :CAS port map (one ,p(1), A(2), p(2),
						   open, p(2), s(0), c(2));
							 
CAS_d :CAS port map (Di ,pi(1) ,s(1) ,c(5) , 
						 open ,p(3) ,R(1) ,Co(1));
							
CAS_e :CAS port map (p(3) ,p(3) ,s(0) ,c(4) ,
						   open ,p(4) ,R(2) ,c(5));

CAS_f :CAS port map (np4 ,p(4) ,A(3) ,c(3) ,
							open,p(5) ,R(3) ,c(4));
								 
CAS_g :CAS port map (one ,p(5) ,A(4) ,p(6) ,
						   open,p(6) ,R(4) ,c(3));




Do(0) <= Di   ;
Do(1) <= p(3) ;

end Behavioral;

