#include "stdio.h"
void main(void)
{
    int score;
    printf("������ѧ���ĳɼ�:  ");
    scanf("%d", &score);
  	if(score>=0 && score<=100) 
		switch (score/10)
		{
		     case 10:
		     case 9:  printf("����\n"); break;
		     case 8:  printf("����\n"); break;
		     case 7:  printf("�е�\n"); break;
		     case 6:  printf("����\n"); break;
		     default:  printf("������\n"); break;
		}
	else
		printf("���ݴ���\n");
}

