#include<stdio.h>
#define N 80
int count(char str[])
{
	int m=0,n=0,k=0;
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z')
			m++;
		else if(str[i]>='0'&&str[i]<='9')
			n++;
		else
			k++;
	}
	printf("��ĸ%d,����%d,����%d",m,n,k);
}
void main()
{
	char str1[N];
	gets(str1);
	count(str1);
}
/*�����޸ĳ� ���ض�ֵ ��main��������ʾ����*/