#include <stdio.h>

char x,y,z;
void assp(char **p, char pref);

void main()
{ 
	char *a, *b, *c, ta, tb, tc;

	printf("��������λ��ʿ��ѡ�������ѡ��x,y,z��:\n");
	scanf("%c%c%c", &ta, &tb, &tc);
	getchar();
	assp(&a, ta);
	assp(&b, tb);
	assp(&c, tc);
	printf("��������λŮʿ��ѡ�������ѡ��a,b,c��:\n");
	scanf("%c%c%c", &x, &y, &z);
	if (*a == 'a') printf("A ���������˵�!\n");
	if (*b == 'b') printf("B ���������˵�!\n");
	if (*c == 'c') printf("C ���������˵�!\n");
}

void assp(char **p, char pref)
{
	switch (pref) {
		case 'x': *p=&x; break;
		case 'y': *p=&y; break;
		case 'z': *p=&z; break;
	}
}
