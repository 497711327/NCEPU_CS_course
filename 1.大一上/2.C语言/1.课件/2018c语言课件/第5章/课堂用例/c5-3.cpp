/*����һ���ַ����Իس���Ϊ��������ͳ�������ַ��ĸ���*/
#include"stdio.h"
void main(void)
{
	char ch;
	int number = 0;
	printf("����һ���ַ����Իس�������");
	while((ch = getchar()) != '\n')  /*�ж϶����ַ���������ǻس���������1*/
		number++;
	printf("һ��������%d���ַ�", number);
}
