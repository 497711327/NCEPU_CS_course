#include "stdio.h"
void main(void)
{
	int year;
	printf("����һ����ݣ�");
	scanf("%d", &year);
	if((year%4 == 0) && (year%100 != 0) || (year%400 == 0))
		printf("�����������\n");
	else
		printf("����ݲ�������\n");
}
