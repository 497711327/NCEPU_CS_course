#include <stdio.h>
void main(void)
{
	int i,j,k,n,temp;
	int a[6][6];
	
	/*����λ���鸳ֵ*/
	printf("Enter n:");
	scanf("%d",&n);
	for(k=1,i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=k++;  /* ������Ԫ�ظ�ֵ */
		
		/*  ���ԭ���� */
		printf("ԭ����:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%4d",a[i][j]);
			printf("\n");
		}
		/*���л���*/
		for(i=1;i<n;i++)
			for(j=0;j<i;j++) /* ֻ���������Ǿ��� */
			{
				temp=a[i][j];  /* ����a[i][j]��a[j][i] */
				a[i][j]=a[j][i];
				a[j][i]=temp;
			}
			
			/* ���ת�þ��� */
			printf("ת�þ���\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
					printf("%4d",a[i][j]);
				printf("\n");
			}
}
