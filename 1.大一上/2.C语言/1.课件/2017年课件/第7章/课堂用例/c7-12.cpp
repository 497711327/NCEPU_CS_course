/*��д�������������Ľ׳�*/
#include "stdio.h"
double fact(int n);                             /*��������*/

void main(void)
{
	int n;
	printf("����һ��������\n");                 /*������ֵ*/
	scanf("%d",&n);                         
	printf("%d!�Ľ׳��ǣ�%.1f\n", n, fact(n));  /*��������*/
}

double fact(int n)                              /*��������*/
{
	double result;
	if(n == 1||n == 0)
		result = 1;
	else
		result = n*fact(n-1);                   /*�����ݹ����*/
	return result;                   
}
