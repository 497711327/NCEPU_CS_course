#include <stdio.h>
void main(void)
{  
	int x, y;                   	/*�������x��y*/
	printf("������x��ֵ��");
	scanf("%d", &x);             	/*�Ӽ���������x*/
	if(x>0)                      	/*�ж�x��ֵ�Ƿ����0*/
		y=x*x;                 	/*���x>0����y= x2*/
	else                        	/*���x����0����xС�ڵ���0*/
		y=0;                   	/*���x<=0����y=0*/
	printf("y=%d\n", y);          	/*���y��ֵ*/
}
