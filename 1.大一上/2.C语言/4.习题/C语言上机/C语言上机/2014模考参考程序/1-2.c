//2.�ú���ʵ�ֶ�����һ��ʵ���Ӵ�С��ѡ�����������������øú����������Ľ����
#include"stdio.h"
#define n 10
void sort(float a[])
{
	int index,i,j;
	float t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1,index=i;j<n;j++)
			if(a[j]>a[index])
				index=j;
		t=a[i];
		a[i]=a[index];
		a[index]=t;
	}
}
main()
{
	float a[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%f",&a[i]);
	sort(a);
	for(i=0;i<10;i++)
		printf("%f ",a[i]);
}
