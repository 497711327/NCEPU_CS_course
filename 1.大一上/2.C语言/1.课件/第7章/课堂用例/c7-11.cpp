/*��д������������Ԫ�صľ�����*/
#include "stdio.h"
#include "math.h"
#define N 10

float average(float a[], int n);             /*��������*/
float variance(float a[], int n, float ave);     /*��������*/
float rms(float a[], int n);                 /*��������*/

void main(void)
{
	float x[N], var;
	int i;
	printf("����%d����ֵ��\n",N);
	for(i = 0;i < N; i++)                    /*������ֵ*/
		scanf("%f", &x[i]);
	var = rms(x, N);                         /*��������*/
	printf("��Щ��ֵ�ľ�����Ϊ��%.4f\n", var);
}

float average(float a[], int n)              /*��������*/
{
	int i;
	float sum = 0.0;
	for(i = 0;i < n; i++)
		sum = sum + a[i];
	return sum/n;                            /*���������ƽ��ֵ*/
}

float variance(float a[], int n, float ave)  /*��������*/
{
	int i;
	float var;
	var = 0.0;
	for(i = 0;i < n; i++)
		var = var + pow((a[i] - ave),2);    /*���㷽��*/
	return var;
}

float rms(float a[], int n)                 /*��������*/
{
	int i;
	float ave,var;
	ave = average(a, n);
	var = variance(a, n, ave);
	var = sqrt(var);                       /*���������*/
	return var;
}
