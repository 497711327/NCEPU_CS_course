/*��д�����������Լ������С������*/
#include "stdio.h"

int gys(int a, int b);        /*��������*/
int gbs(int a, int b);        /*��������*/

void main(void)
{
	int x, y;
	printf("��������������\n");
	scanf("%d%d",&x,&y);
	printf("%d��%d�����Լ���ǣ�%d", x, y, gys(x, y));
    printf("����С��������%d\n", gbs(x, y));
}

int gys(int a, int b)        /*��������*/
{
	int t;
	t = a%b;                 /*շת������������Լ��*/
	while(t != 0)
	{
		a = b;
		b = t;
		t = a%b;
	}
	return b;
}

int gbs(int a, int b)        /*��������*/
{
	int t;
	t = a*b/gys(a,b);        /*��������*/
	return t;
}
