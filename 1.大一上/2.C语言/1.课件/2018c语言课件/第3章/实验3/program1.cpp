#include <stdio.h>
void main(void)
{
	int  a=3,b=4,c=5;
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	printf("a+b || b++ ��ֵΪ:%d\n", a+b || b++ );    /* ����߼����ʽ��ֵ*/ 
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	printf("b==c && c++ ��ֵΪ:%d\n", b==c && c++);    
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	printf("a<b<c ��ֵΪ:%d\n",a<b<c);         
	printf("!a<b ��ֵΪ:%d\n", !a<b); 
}
