#include <stdio.h>
#include <stdlib.h>

#define MAXLEN 300        /*���ų���MAXLEN������һ�е��ַ��� */

void main()
{
	char str2[MAXLEN];
	char *str;
	int flag;

	int pal(char *);
	void trim(char *, char *);
                         /* ��̬�����ڴ�ռ�*/
	if ((str = (char *) malloc(MAXLEN)) == NULL) {
		printf("�ڴ�������!\n");
		exit(0);
	}
	
	printf("������һ������:\n");
	gets(str);
	while (*str != '#') {
		trim(str, str2);
		flag = pal(str2);
		printf("\"%s\" ",str);
		if (flag) 
			puts("��һ�����ľ�!");
		else 
			puts("����һ�����ľ�!");
		printf("������һ������:\n");
		gets(str);
	}
	free(str);
}
      /*�ж��Ƿ�Ϊ���ĵ���*/
int pal(char *str)
{
	char *p, *q;

	p = str; q = str;    /* pָ���ַ������ײ�*/
	while (*q != '\0') 
		q++;             /* qָ���ַ�����β��*/
	q--;
	while (p < q) 
		if (*p == *q) {
			p++; q--;
		} else break;
	return (p >= q);
}
     /* ȥ�������е��������� */
void trim(char * str1, char * str2)
{
	while (*str1 !='\0') {
		if (*str1 >= 'a' && *str1 <= 'z') {
			*str2 = *str1;
			str2++;
		}
		str1++;
	}
	*str2='\0';
}
