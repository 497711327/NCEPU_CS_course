#include <stdio.h>
#include <math.h>
void main(void)
{
    float a,b;
    char c;
    printf("������ʽ: ������<�����>������\n");
    scanf("%f%c%f", &a, &c, &b);
    switch(c){
       case '+': printf("%f\n", a+b); break;
       case '-': printf("%f\n", a-b); break;
       case '*': printf("%f\n", a*b); break;
       case '/':
		   if(fabs(b)<=1e-6)
			   printf("���ݴ��󣬳�������Ϊ0��\n");
		   else
			   printf("%f\n",a/b);
		   break;
       default: printf("�����ֻ����+��-��*��/��\n");
    }
}
