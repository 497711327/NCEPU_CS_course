#include <stdio.h>
void main(void)
{
    int c,x=0,y=-5;
	printf("%d,%d\n", !x*y, x&&y);     /*��һ��������*/
	x=1;
	y=1;
	c=x++||y++;
    printf("%d,%d,%d\n", x, y, c);      /*�ڶ���������*/
	x=0;
	y=0;
	c=x++&&y++;
    printf("%d,%d,%d\n", x, y, c);      /*������������*/
}

