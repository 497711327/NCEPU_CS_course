#include <stdio.h>

long *a, *b, *c;
long *x, *y, *z;
long *tpre(char pref);

void main()
{ 
	char prefa, prefb, prefc;

	printf("��������λ��ʿ��ѡ�������ѡ��x,y,z��:\n");
	scanf("%c%c%c", &prefa, &prefb, &prefc);
	getchar();
	a=tpre(prefa);
	b=tpre(prefb);
	c=tpre(prefc);
	printf("��������λŮʿ��ѡ�������ѡ��a,b,c��:\n");
	scanf("%c%c%c", &prefa, &prefb, &prefc);
	x=tpre(prefa);
	y=tpre(prefb);
	z=tpre(prefc);
	
	printf("&a=%x x=%x\n", &a, x);
	printf("a=%x &x=%x\n", a, &x);
	printf("&a=%x *a=%x\n", &a, *a);
	
	if (&a == (long **)*a) printf("A ���������˵�!\n");
	if (&b == (long **)*b) printf("B ���������˵�!\n");
	if (&c == (long **)*c) printf("C ���������˵�!\n");
}

long *tpre(char pref)
{
	switch (pref) {
		case 'x': return (long *) &x;
		case 'y': return (long *) &y;
		case 'z': return (long *) &z;
		case 'a': return (long *) &a;
		case 'b': return (long *) &b;
		case 'c': return (long *) &c;
	}
}
