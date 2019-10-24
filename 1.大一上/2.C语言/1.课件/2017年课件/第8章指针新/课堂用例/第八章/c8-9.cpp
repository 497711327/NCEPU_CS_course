#include <stdio.h>
#include <stdlib.h>
	
#define MAXLEN 80   /*���ų���MAXLEN������һ�е��ַ��� */

void main()
{
	char *str;
	int flag;

	int pal(char *);
                    /* ��̬�����ڴ�ռ�*/
	if ((str = (char *) malloc(MAXLEN)) == NULL) {
		printf("Memory allocation error!\n");
		exit(0);
	}
	
	printf("Input a word:\n");
	scanf("%s", str);
	while (*str != '#') {
		flag=pal(str);
		if (flag)
			printf("%s is a palindrome!\n", str);
		else 
            printf("%s isn't a palindrome!\n", str);
		printf("Input a word:\n");
		scanf("%s",str);
	}
	free(str);
}
    /*�ж��Ƿ�Ϊ���ĵ���*/
int pal(char *str)
{
	char *p, *q;

	p = str; q = str;         /* pָ���ַ������ײ�*/
	while (*q != '\0') 
		q++;             /* qָ���ַ�����β��*/
	q--;
	while (p < q) 
		if (*p == *q) 
		{
			p++; q--;
		} 
		else break;
	return (p >= q);
}
