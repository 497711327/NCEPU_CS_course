#include<stdio.h>
void main  ()
{
   int a,b,x;
   printf("*****   �����������������    *****\n\n\n");
   printf("        ��������������");
   scanf ("%d%d",&a,&b);
   x=a;
   if(b<a) x=b;
   while (a%x!=0||b%x!=0)
     x--;
   printf("%d��%d�����������%d\n",a,b,x);
}