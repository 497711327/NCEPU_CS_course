#include <stdio.h>
void swap(int *x,int *y)
{
	int t;
	printf("\n-----swap-----\n",x,y);
	printf("x=%x,y=%x\n",x,y);
	t=*x;
	*x=*y;
	*y=t;
	printf("-----swap-----\n\n",x,y);
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("&a=%x,&b=%x\n",&a,&b);
	printf("����ǰ��a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("���ú�a=%d,b=%d\n",a,b);
}
