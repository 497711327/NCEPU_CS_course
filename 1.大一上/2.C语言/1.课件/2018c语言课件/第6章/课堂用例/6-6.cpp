/* ѡ������ */
#include <stdio.h>
void main()
{
	int i,index,k,n,temp;
	int a[10];      /* ����һ������a��������10������Ԫ�� */
	
	printf("Enter n:\n");
	scanf("%d",&n);         /* ��������a��Ԫ�صĸ��� */
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);     /* ���ζ��������е�Ԫ��ֵ */
	
	/* ������a�е�n��Ԫ������ */
	for(k=0;k<n-1;k++)
	{
		/* indexΪÿһ������ʱ��СԪ�ص��±ꡣ��ÿһ������ǰ����index�趨Ϊ���ֲ�������ĵ�һ��Ԫ���±� */
		index=k;
		for(i=k+1;i<n;i++)
			if(a[i]<a[index])   /* ���ֱ�a[index]С��Ԫ�أ����޸�indexֵ */
				index=i;
			
			/* �ڸ��ֱȽϽ����󣬽�a[index]��a[k]���� */
			temp=a[index];
			a[index]=a[k];
			a[k]=temp;
	}
	
	/* ��������Ľ�� */
	printf("After sorted:\n");
	for(i=0;i<n;i++)
		printf("%d  ",a[i]);
	printf("\n");
}
