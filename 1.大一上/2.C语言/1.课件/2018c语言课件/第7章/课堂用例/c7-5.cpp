/*����������������ֵ*/
#include "stdio.h"
void swap(int x, int y);
void main(void)
{
	int a,b;
	printf("�����뽻������ֵ��");
	scanf("%d%d",&a, &b);                    /*������ֵ*/

	printf("����ǰa=%d,b=%d\n",a, b);
	swap(a,b);                               /*���ú���*/
	printf("������a=%d,b=%d\n",a, b);
}

void swap(int x, int y)                      /*������������*/
{
  int temp;
  temp = x;
  x = y;
  y = temp;
}
