#include <stdio.h>
void main()
{
	char c;
    c=getchar();   /* getchar()�����Ĺ���Ϊ�ڼ���������һ���ַ���������c */
    c=c-32;        /* ��c�洢���ַ���ASCII���ȥ32 */    
    putchar(c);    /* putchar(c)�����Ĺ���Ϊ�������c�д洢���ַ� */ 
	putchar('\n');
 }

