#include <stdafx.h>

void main()
{
	int n;
	for(n=100; n<=999; n++)
	{
		int a, b, c;
		c=n%10;
		a=n/100;
		b=n/10%10;
		if(a*a*a+b*b*b+c*c*c == n)
			printf("%d��ˮ�ɻ���\n", n);
	}

}