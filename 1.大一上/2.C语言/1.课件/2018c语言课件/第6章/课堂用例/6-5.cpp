/* �������в���һ���������� */
#include <stdio.h>
void main()
{
	int i,flag,x;  /* ����flag����������ָʾ�Ƿ���ҵ��Ǹ��������� */
	int a[10]={22,19,36,80,98,12,20,55,-8,16};   /* ���岢��ʼ������ */
	/*�������*/
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	printf("\n");
	
	printf("Enter x:\n");
	scanf("%d",&x);        
	flag=0;            /* ��ѯǰ��flag��ֵΪ0����ʾû�в�ѯ��x */
	for(i=0;i<10;i++)
		if(a[i]==x)    /* ���������a���ҵ���x */
		{
			printf("Index is %d\n",i);
			flag=1;     /* ��flag��ֵΪ1����ʾ������a���ҵ���x */
			break;      /* ����ѭ�� */
		}
		
		if(flag==0)         /* ��ѯ���������flagֵΪ0����ʾ����a��û��x */
			printf("Not Found\n");
}
