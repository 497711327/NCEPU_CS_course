/*����һ�������������5λȡ��*/
#include "stdio.h"
void main(void)
{
	int i;
	printf("����һ��������");
	scanf("%d", &i);
	i = i^16;        /*16=00000000 00010000*/
	printf("ȡ�����ֵΪ��%d", i);
}
