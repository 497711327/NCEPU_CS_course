/*����һ���ַ�������ĸ�ַ���Сд�����������������ַ���,���������ʽʵ�֡�*/
#include "stdio.h"
void main(void)
{
	char ch;
	ch = getchar();
	while(ch != '\n')
	{
		ch=(ch>='a'&&ch<='z')?(ch-'a'+'A'):((ch>='A'&&ch<='Z')?(ch-'A'+'a'):ch);
		putchar(ch);
		ch = getchar();
	}
}
