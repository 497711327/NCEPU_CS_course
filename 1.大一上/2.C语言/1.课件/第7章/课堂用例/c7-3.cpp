#include "stdio.h"
void main(void)
{
	int num;
	void pyramid(int n);                   /*��������*/

	printf("������������Ĳ�����");        /*��ʾ����*/
	scanf("%d",&num);                      /*�������������*/

	pyramid(num);                          /*���ú�����������ֽ�����*/
}

void pyramid(int n)                        /*��������*/
{
	int i, j;
	for(i = 1;i <= n; i++)                  /*����������*/
	{
		for(j = 1;j <= n-i; j++)           /*���ÿ����ߵĿո���*/
			printf(" ");

		for(j = 1;j <= i; j++)             /*���ÿ�е�����*/
			printf("%d ",i);
		printf("\n");                      /*����*/
	}
}
