/*ʹ�û�����ʽ˵�����������ʵ������*/
#include"stdio.h"
void main(void)
{
	float f;   
	double d;
	scanf("%f", &f);
	scanf("%lf", &d);
	printf("%f,%e\n", f, f);
	printf("%6.3f,%6.2f,%.2f", d, d, d);
}
