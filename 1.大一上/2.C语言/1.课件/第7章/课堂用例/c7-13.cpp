/*��ŵ������*/
#include "stdio.h"
/*��n�����Ӵ�a�ƶ���c������b*/
void hanio(int n, char a, char b, char c);    /*��������*/

void main(void)
{
	int n;
	printf("���뺺ŵ�����ӵĸ�����\n");      
	scanf("%d", &n);                    /*������ֵ*/
	printf("�ƶ��Ĳ���Ϊ��\n");
	hanio(n, 'a', 'b', 'c');                  /*��������*/
}

void hanio(int n, char a, char b, char c)     /*��������*/
{
	if(n == 1)
		printf("%c-->%c\n",a,c);
	else
	{
		hanio(n-1, a, c, b);          /*��n-1���Ӵ�a�ƶ���b������c*/
		printf("%c-->%c\n", a, c);    /*��n���Ӵ�a�ƶ���c*/
		hanio(n-1, b, a, c);          /*��n-1���Ӵ�b�ƶ���c������a*/
	}
}
