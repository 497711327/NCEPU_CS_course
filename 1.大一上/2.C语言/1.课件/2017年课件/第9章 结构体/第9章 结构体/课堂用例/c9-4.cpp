#include <stdio.h>
#include <math.h>

struct stu                //ѧ���ṹ����
{
    int num;
    char *name;
    char sex;
    float score;
}boy[5]={
          {101,"Li ping",'M',45},
          {102,"Zhang ping",'M',62.5},
          {103,"He fang",'F',92.5},
          {104,"Cheng ling",'F',87},
          {105,"Wang ming",'M',58},
        };
void main()
{
    int i,c=0;                 //ѭ�����Ʊ���������������
    float ave,s=0;            //ƽ���ɼ����ܳɼ�

    for(i=0;i<5;i++)
    {
      s+=boy[i].score;
      if(boy[i].score<60) c+=1;
    }
    printf("s=%f\n",s);
    ave=s/5;
    printf("average=%f\ncount=%d\n",ave,c);
}
