#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a[10][10];
	int *p;
	int num, max, i;

	printf("Input the element of column:\n");
	scanf("%d", &num);                      /*��������Ľ���*/
	if (num<1 || num>10) {
		printf("Wrong number!\n");
		exit(0);
	}
	
	printf("Input the element of matrix:\n");
	for (i=0; i<num; i++) {
		for (p=a[i]; p<=&a[i][num-1]; p++)
			scanf("%d", p);              /*����num��num������*/
	}

	max=a[0][0];
	for (i=0; i<num; i++) {                /*�������飬�����ֵ����Ԫ��*/     
		for (p=a[i]; p<=&a[i][num-1]; p++)
			if (max < *p)
				max = *p;
	}

	for (i=0; i<num; i++) {
		for (p=a[i]; p<=&a[i][num-1]; p++)
			printf("%6d ",*p);
		printf("\n");                   /*���num��num������*/
	}
	printf("The max element is %d\n", max); /*������Ԫ��*/
}
