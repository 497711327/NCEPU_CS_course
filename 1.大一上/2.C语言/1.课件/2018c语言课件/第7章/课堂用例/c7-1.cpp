/*����ƽ��ֵ*/
#include "stdio.h"
void main(void)
{
	float x, y, z;
	float average(float a, float b);          /*��������*/

	printf("����3����ֵ��");
	scanf("%f%f%f",&x,&y,&z);

	printf("%.2f��%.2f��ƽ��ֵΪ��%.2f\n",x,y,average(x, y));  /*��������*/
	printf("%.2f��%.2f��ƽ��ֵΪ��%.2f\n",y,z,average(y, z));  /*��������*/
	printf("%.2f��%.2f��ƽ��ֵΪ��%.2f\n",x,z,average(x, z));  /*��������*/

}

float average(float a, float b)               /*��������*/
{
	float c;
	c = (a+b)/2;
	return c;
}
