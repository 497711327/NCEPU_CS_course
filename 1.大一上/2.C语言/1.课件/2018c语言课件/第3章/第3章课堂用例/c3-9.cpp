#include "stdio.h"
void main(void)
{int score;
    printf("������ѧ���ĳɼ�:  ");
    scanf("%d", &score);
    if(score>=90) 
      printf("����\n");
    else if(score>=80)
      printf("����\n");
    else if(score>=70)
      printf("�е�\n"); 
    else if(score>=60)
      printf("����\n");
    else
      printf("������\n");
}
