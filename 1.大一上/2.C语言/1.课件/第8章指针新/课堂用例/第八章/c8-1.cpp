#include <stdio.h>
void swap(int x,int y)
{
	int t;
	printf("����ǰ��x=%d,y=%d\n",x,y);
	t=x;
	x=y;
	y=t;
	printf("������x=%d,y=%d\n",x,y);
}
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("����ǰ��a=%d,b=%d\n",a,b);
	swap(a,b);
	printf("���ú�a=%d,b=%d\n",a,b);
}
