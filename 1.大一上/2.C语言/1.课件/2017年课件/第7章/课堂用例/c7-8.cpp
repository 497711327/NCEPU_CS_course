/*��д����ʵ���ַ����ĸ���*/
#include "stdio.h"
#include "string.h"
#define N 80

void copy_string(char from[], char to[]);        /*��������*/
void main(void)
{
	char a[N], b[N];
	printf("������һ���ַ�����\n");
	gets(a);
	copy_string(a,b);                            /*��������*/
	puts(b);
}

void copy_string(char from[], char to[])         /*��������*/
{
  int i;

  for(i = 0;from[i] != '\0'; i++) /*��from����Ԫ�ز���'\0',���Ƶ�to����*/
	  to[i] = from[i];
  to[i] = '\0';                   /*to����������'\0'����ʶ�ַ�������*/
}
