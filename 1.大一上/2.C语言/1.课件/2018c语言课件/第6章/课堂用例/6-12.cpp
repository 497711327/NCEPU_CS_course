#include <stdio.h>
void main()
{
	int a[6][6],n,i,j,sum=0;
	
	printf("Enter n:");   /* nΪ���� */
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
		
		for(i=0;i<n;i++)
			sum=sum+a[i][i];   /* ���Խ���Ԫ��*/
		printf("sum=%d\n",sum);
}

