/* �Ƚ���������Ĵ�С */
#include "stdio.h"
#define N 5
int cmp_array(int a[], int b[], int length);          /*��������*/
void main(void)
{
	int a[N], b[N], cmp;
	int i;
	printf("����������1��%d��������\n", N);          /*��������*/
	for(i = 0;i < N; i++)
		scanf("%d",&a[i]);
	printf("����������2��%d��������\n", N);
	for(i = 0;i < N; i++)
		scanf("%d",&b[i]);
	cmp = cmp_array(a,b,N);                           /*��������*/
	if(cmp > 0)										  /*������*/
		printf("����1��������2\n");
	else if(cmp < 0)
		printf("����1С������2\n");
	else
		printf("����1��������2\n");
}

int cmp_array(int a[], int b[], int length)           /*��������*/
{
  int i, result, m ,n, k;
  m = n = k = 0;
  for(i = 0;i < length; i++)                          /*����m��n��k*/
	  if(a[i] > b[i])
		  m++;
	  else if(a[i] < b[i])
		  n++;
	  else
		  k++;

  if(m > n) 
	  result = 1;
  else if(m < n)
	  result = -1;
  else
	  result = 0;

  return result;  /*���ؽ����1����a����b��0����a����b��-1����aС��b*/
}
