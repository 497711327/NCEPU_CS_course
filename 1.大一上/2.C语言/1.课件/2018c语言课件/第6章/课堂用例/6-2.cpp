#include <stdio.h>
void main()
{
	int i,a[10];   /* ������һ������a������10��Ԫ�� */
	/* �������е�ÿ��Ԫ�ذ�˳��ֵ */
	for(i=0;i<=9;i++)
		a[i]=i;
	/* ������������и�Ԫ�ص�ֵ */
	for(i=9;i>=0;i--)
		printf("%d  ",a[i]);
	printf("\n");    
}
