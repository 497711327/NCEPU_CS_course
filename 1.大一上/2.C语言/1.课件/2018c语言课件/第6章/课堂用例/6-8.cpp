/* ��ÿ��ѧ��ƽ���ɼ���ÿ�ſγ�ƽ���ɼ� */
#include <stdio.h>
void main()
{
	int sum;
	int i,j,s[5][3];       /* ������s��ѧ����ÿ�ſγ̵ĳɼ� */
	float avg[5]={0},mean[3]={0};  /*avgÿ��ѧ����ƽ���֣�meanÿ�ſγ̵�ƽ����*/
	
	/* ��ȡÿ��ѧ����ÿ�ſγ̵ĳɼ���������ѧ��ƽ���ɼ� */
	for(i=0;i<5;i++)
	{
		printf("No.%d  ",i+1);
		for(sum=0,j=0;j<3;j++)
		{
			scanf("%d",&s[i][j]);
			sum+=s[i][j];
		}
		avg[i]=sum/3.0;
	}
	
	/* ����ÿ�ſγ̵�ƽ���� */
	for(j=0;j<3;j++)
	{
		for(i=0;i<5;i++)
			mean[j]+=s[i][j];
		mean[j]=mean[j]/5;
	}
	
	/* ���������� */
	printf("ѧ��  ");
	for(i=0;i<3;i++)
		printf("�γ�%d ",i+1);
	printf("ƽ����\n");
	
	for(i=0;i<5;i++)
	{
		printf("No.%d  ",i+1);
		for(j=0;j<3;j++)
			printf("%5d ",s[i][j]);
		printf("%6.1f\n",avg[i]);
	}
	printf("ƽ��: %5.1f %5.1f %5.1f\n",mean[0],mean[1],mean[2]);
}
