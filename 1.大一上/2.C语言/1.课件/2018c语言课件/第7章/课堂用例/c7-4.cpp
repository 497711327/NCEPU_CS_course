/*�ж�1777��1991�Ƿ�Ϊ������*/
#include "stdio.h"
#include "math.h"

int prime(int n)                        /*��������*/
{
	int k, i, result;                     

	k = sqrt(n);                        /*�ж�����*/
	for(i = 2; i <= k; i++)
		if(n%i == 0) break;

	if(i > k)
		result = 1;
	else
		result = 0;

	return result;         /*��������ֵ��1����n��������0����n��������*/

}

void main(void)
{
	int a = 1777, b = 1991;
	
	if(prime(a))                        /*��������*/
		printf("%d������\n",a);
	else
		printf("%d��������\n",a);
	
	if(prime(b))                        /*��������*/
		printf("%d������\n",b);
	else
		printf("%d��������\n",b);

}
