/*��������Ԫ�ص����ֵ*/
#include "stdio.h"
#define N 10
float max_array(float a[], int n);             /*��������*/
void main(void)
{
	float array[N], max;
	int i;
	printf("������%d��ʵ����\n",N);
	for(i = 0;i < N; i++)
		scanf("%f",&array[i]);

	max = max_array(array, N);                 /*��������*/
	printf("��������Ԫ��ֵ�ǣ�%.2f",max);
}

float max_array(float a[], int n)             /*��������*/
{
  int i;
  float max;
  max = a[0];
  for(i = 1;i < n; i++)
	  if(a[i] > max)
		  max = a[i];
  return max;
}
