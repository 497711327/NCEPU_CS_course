/*��д����ʵ��ѧ���ɼ���ƽ��������*/
#include "stdio.h"
#define M 5       /*ѧ������*/
#define N 5       /*�ɼ�����*/

void sort_score(float score[][N], float ave[]);        /*��������*/
void main(void)
{
	float score[M][N] = {                              /*ѧ���ɼ�*/
		{80.0, 85.0, 78.0, 97.0, 68.0},
		{90.0, 97.0, 89.0, 88.0, 92.0},	
		{60.0, 75.0, 79.0, 95.0, 56.0},
		{98.0, 61.0, 78.0, 99.0, 68.0},
		{80.0, 89.0, 98.0, 97.0, 88.0}};
	float ave[M];                                      /*ƽ���ɼ�*/
	int i, j;

	sort_score(score, ave);                            /*��������*/

	for(i = 0;i < M; i++)                     /*���������ѧ���ɼ�*/
	{
		printf("��%d��ѧ����ƽ���ɼ�Ϊ��%.2f\n", i+1, ave[i]);
		for(j = 0;j < N; j++)
			printf("%10.2f",score[i][j]);
		printf("\n");
	}
}

void sort_score(float score[][N], float ave[])       /*��������*/
{
  float sum,temp;
  int i,j,k;

  for(i = 0;i < M; i++)                              /*����ƽ���ɼ�*/
  {
	  sum = 0;
	  for(j = 0;j < N; j++)
		  sum = sum + score[i][j];
	  ave[i] = sum/N;
  }

  for(i = 0;i < M-1; i++)                            /*��ƽ���ɼ�����*/
	  for(j = i+1;j < M; j++)
	  {
		  if(ave[i] < ave[j])
		  {
			  temp = ave[i];
			  ave[i] = ave[j];
			  ave[j] = temp;
			  for(k = 0;k < N; k++)                 /*ͬʱ��ѧ���ɼ�����*/
			  {
				  temp = score[i][k];
				  score[i][k] = score[j][k];
				  score[j][k] = temp;
			  }
		  }
	  }
}
