#include <stdio.h>
void main()
{
	char str[80];      /*����һ���ַ�����str*/
	int i,m=0,n=0,k=0; /* mΪ��ĸ�ĸ�����nΪ���ֵĸ�����kΪ�����ַ��ĸ���*/
	
	gets(str);
	
	for(i=0;str[i];i++)
		if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
			m++;
		else if(str[i]>='0'&&str[i]<='9')
			n++;
		else
			k++;
		
		printf("��ĸ %d �������� %d ���������ַ� %d ��\n",m,n,k);
}
