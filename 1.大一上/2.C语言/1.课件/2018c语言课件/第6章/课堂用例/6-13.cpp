/* ����ĳ�����ڶ�Ӧ����ĵڼ��� */
#include <stdio.h>
void main()
{
	int Year,Month,Day;
	int days=0;
    int day_of_year(int Year, int Month, int Day); /* �������� */
	
	printf("�������ꡢ�¡��գ�\n");
	scanf("%d%d%d",&Year,&Month,&Day); /* ���Year,Month,Day��ֵ */
	
    days=day_of_year(Year,Month,Day); /* �������� */
	printf("%d��%d��%d���Ǹ���ĵ�%d��\n",Year,Month,Day,days);
}

int day_of_year(int year,int month,int day )
{
	int k,leap;
	int tab[2][13]={  /* ����tabΪ2��13�е��������� */
		{0,31,28,31,30,31,30,31,31,30,31,30,31}, /* �����0��Ϊ������ÿ������ */
		{0,31,29,31,30,31,30,31,31,30,31,30,31}  /* �����1��Ϊ����ÿ������ */
	};
	
	leap=((year%4==0)&&(year%100!=0)||(year%400==0));  /* �ж���������Ƿ�Ϊ���� */
	for(k=0;k<month;k++)
		day=day+tab[leap][k];  /* ���������Ϊ����ĵڼ��� */
	return day;
}
