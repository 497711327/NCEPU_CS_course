/*Ѱ�������е����Ԫ�أ�ʹ��ȫ�ֱ�����*/
#include "stdio.h"
#define N 10

float array[N];                       /*ȫ�ֱ���*/
float max_array();                    /*��������*/

void main(void)
{
	float max;
	int i;
	printf("������%d��ʵ��:\n",N);
	for(i = 0;i < N; i++)
		scanf("%f",&array[i]);        /*ȫ������ʹ��*/
	max = max_array();                /*��������*/
	printf("���������Ԫ���ǣ�%.2f",max);
}

float max_array()                     /*��������*/
{
  int i;
  float max;

  max = array[0];                     /*ȫ�ֱ���ʹ��*/

  for(i = 1;i < N; i++)
	  if(array[i] > max)
		  max = array[i];

  return max;
}
