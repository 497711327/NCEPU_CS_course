#include <stdafx.h>

int main(int argc, char * argv[])
{
	int n;
	scanf("n=%d", &n);
	if(n%3==0 && n%5==0)
	{
		printf("%d�ܹ���3��5ͬʱ����\n", n);
	}
	else
	{
		printf("%d���ܹ���3��5ͬʱ����\n", n);
	}	

	return 0;
} 