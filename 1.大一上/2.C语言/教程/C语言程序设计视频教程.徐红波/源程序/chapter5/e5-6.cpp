#include <stdafx.h>

#include <math.h>

void main()
{
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	if(a == 0)
	{
		printf("����һԪ���η���\n");
	}
	else
	{
		double disc;
		disc=b*b-4*a*c;
		if(disc > 0)
		{
			printf("x1=%lf\n", (-b+sqrt(disc))/(2*a));
			printf("x2=%lf\n", (-b-sqrt(disc))/(2*a));
		}
		else
		{
			if(disc == 0)
			{
				printf("x1=x2=%lf\n", (-b)/(2*a));
			}
			else
			{
				printf("û��ʵ��\n");
			}
		}
	}
}