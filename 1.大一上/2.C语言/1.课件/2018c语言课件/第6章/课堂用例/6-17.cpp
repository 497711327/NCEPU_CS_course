#include <stdio.h>
void main()
{
	char str1[80],str2[80];        /*���������ַ�����str1��str2 */
	int i=0,k=0;  
	
	gets(str1);
	gets(str2);
	
	while(str1[i])
		i++;             /* �ҵ�str1���ַ��Ľ�����־����λ�� */
	
	while(i<79)
		if(str2[k])
			str1[i++]=str2[k++];   /* ���ν�str2�е��ַ����ӵ�str1��ĩβ */
		else
			break;
		str1[i]='\0';      /* �����һ���ַ���д��'\0' */
		
		puts(str1);
}
