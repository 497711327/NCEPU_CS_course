/*  ����Ĺ���Ϊ��Բ���ܳ������   */

#include<stdio.h>
#define PI 3.1415926        /* ����PI ΪԲ���ʣ�PIΪ���ų���*/
/* ������*/
void main(void)
{
  float r,circum,area;            /* r��Բ�İ뾶��circumԲ���ܳ���areaԲ�����*/
  float get_circum(float r);      /*  ��������get_ circum  */ 
  float get_area (float r);      /*  ����get_area */ 

  printf("������Բ�İ뾶:");   
  scanf("%f",&r);               /* �Ӽ���������r��Բ�İ뾶*/
  circum = get_circum (r);      /* ���ú���get_ circum��Բ���ܳ�*/
  area=get_area(r);                 /* ���ú���get_area��Բ�����*/
  printf("Բ���ܳ�Ϊ%.2f ��Բ�����Ϊ %.2f\n",circum,area);
 }

/*  ����get_ circum(r)����Բ���ܳ�  */ 
float get_circum(float r)
{
    return 2*PI*r;
}

 /*  ����get_area (r)����Բ�����  */ 
float get_area (float r)
{
    return PI*r*r;
}
