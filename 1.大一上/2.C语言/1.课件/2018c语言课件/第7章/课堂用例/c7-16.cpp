/*������д���*/
#include "stdio.h"

void f()
{
	static int a;               /*��̬����*/
	printf ("a=%d\n", a);
	a++;
}

int main(void)
{
	f();                       /*��������*/
	f();                       /*��������*/
	
	return 0;
}
