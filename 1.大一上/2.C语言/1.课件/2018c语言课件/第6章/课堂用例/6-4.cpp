#include <stdio.h>
void main()
{
	int i;
	int fib[20];  /* ���鶨�� */
	fib[0]=fib[1]=1;   
	
    /* ����쳲��������������18���� */
	for(i=2;i<20;i++)
		fib[i]=fib[i-1]+fib[i-2];
	
	/* ���쳲��������� */
    for(i=0;i<20;i++)
	{
		printf("%8d",fib[i]);
		if((i+1)%5==0)
			printf("\n");
	}
}
