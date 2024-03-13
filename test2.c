#include <REGX52.H>

void Delay(unsigned int t)		//@12.000MHz
{
	unsigned char i, j;
	while(t--)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}


void main()
{

	P2_0=1;
	while(1)
	{
		if(P3_1==0)
		{
			Delay(20);        //´úÂëÂË²¨·¨
			while(P3_1==0);
			Delay(20);
			P2_0=~P2_0;
		}
		
	}
}