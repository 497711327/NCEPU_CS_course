//1��p224ҳ�����ĵ�2��
#include"stdio.h"
main()
{
	int a[10],*p=a,max,min;
	float s=0,avg=0;
	for(p=a;p<=a+9;p++)
		scanf("%d",p);
	max=*a;
	min=*a;
	for(p=a;p<=a+9;p++)
	{
		s+=*p;
		if(*p>max)
			max=*p;
		if(*p<min)
			min=*p;
	}
	avg=s/10;
	printf("%d,%d,%f,%f\n",min,max,s,avg);
	for(p=a;p<=a+9;p++)
		printf("%d ",*p);
}