#include "stdafx.h"

#include <math.h>

int main(int argc, char* argv[])
{
	int m, k, i;
	for(int j=100; j<=200; j++)
	{
		k=sqrt(j);
		i=2;
		while(i<=k)
		{
			if(j%i == 0)
			{
				break;
			}
			i=i+1;
		}
		if(i > k)
		{
			printf("%d������\n", j);
		}
		else
		{
			printf("%d��������\n", j);		
		}
	}
	
	return 0;

}