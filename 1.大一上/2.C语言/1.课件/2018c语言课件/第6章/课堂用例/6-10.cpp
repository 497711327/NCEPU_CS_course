/* �ҳ������е����ֵ�������±�����±� */
#include <stdio.h>
void main()
{
	int col,i,j,row;
	int a[3][2];  /* ����aΪ3��2�е����Ͷ�ά���� */
	
	printf("Enter 6 integers:\n");
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]); 
		
		/* ���������ʽ�����ά���� */
		for(i=0;i<3;i++)
		{
			for(j=0;j<2;j++)
				printf("%4d",a[i][j]); 
			printf("\n");
		}
		
		/* ������ά���飬�ҳ����ֵa[row][col] */
		row=0;
		col=0;
		for(i=0;i<3;i++)
			for(j=0;j<2;j++)
				if(a[i][j]>a[row][col]) /* ���������У����a[i][j]�ȵ�ǰ�����ֵ�� */
				{
					row=i;
					col=j;
				}
				printf("max=a[%d][%d]=%d\n",row,col,a[row][col]);
				
}
