#include <stdafx.h>

void main()
{
	int y;
	scanf("%d", &y);

	if(y%4 == 0)
	{
		if(y%100 != 0)
		{
			printf("%d������\n", y);
		}
		else
		{
			if(y%400 == 0)
			{
				printf("%d������\n", y);
			}
			else
			{
				printf("%d��������\n", y);
			}
		}
	}
	else
	{
		printf("%d��������\n", y);
	}
}