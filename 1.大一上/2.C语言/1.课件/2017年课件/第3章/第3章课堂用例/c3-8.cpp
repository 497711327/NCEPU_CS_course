#include"stdio.h"
void main(void)
{
    char c;
    printf("������һ���ַ�:    ");
    c=getchar();
    if(c>='0'&&c<='9')
      printf("������\n");
    else if(c>='A'&&c<='Z')
      printf("�Ǵ�д��ĸ\n");
    else if(c>='a'&&c<='z')
      printf("��Сд��ĸ\n");
    else
      printf("�������ַ�\n");
	}
