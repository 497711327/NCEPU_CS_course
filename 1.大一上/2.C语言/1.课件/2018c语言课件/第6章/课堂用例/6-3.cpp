#include <stdio.h>
int main()
{
	int i=0,k=0;
	int a[10]={0}; /* ������10��Ԫ�ص��������飬����ʼ����Ԫ��ֵΪ0 */
    
	/* ��������a��Ԫ�ص�ֵ������� */
	printf("Please input data:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		printf("%4d",a[i]);
	}
	printf("\n");
	
	/* Ѱ�Ҳ���¼���������ֵԪ�ص�λ�� */
	k=0;
	for(i=1;i<10;i++)
		if(a[k]<a[i])  /* ��k����¼���������ֵԪ�ص�λ�� */
			k=i;
		
		printf("k=%d\n",k); /* ������������ֵԪ�ص�λ�� */
	return 0;
}
