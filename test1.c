#include <REGX52.H>
#include <INTRINS.H>       //中间要加空格      

void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
	while (1) {
		unsigned char a = 0xFE;
		int i = 8;
		while (i--) {
			P2 = a;
			Delay500ms();
      a = ~a;
			a = a << 1;
			a = ~a;
		}
	}
}