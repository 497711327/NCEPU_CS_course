#include "stdio.h"

#define MAXSIZE 50

/*ѧ����Ϣ�ṹ����*/
struct student{
   char  no[10];
   char  name[10];
   float score;
};

/*ͳ�Ƴɼ��ȼ�*/
int GetLevelStatis(struct student *p, int, int lev[]);

void main()
{
	struct student stu[10];              //�ṹ���鶨��
       int    level[5] = {0};               //�ɼ��ȼ����鶨�岢��ʼ��

	printf("����10��ѧ����Ϣ��\n");      //����ѧ����Ϣ
	for(int i=0; i<10; i++)
	{
		scanf("%s%s%f", stu[i].no, stu[i].name, &stu[i].score);
	}

	GetLevelStatis(stu,10,level);         //�ɼ��ȼ�ͳ��

	for(i=0; i<5; i++)                    //���ͳ�ƽ��
		printf("�ȼ�Ϊ%c������Ϊ%d��\n", 'A'+i, level[i]); 

}

int GetLevelStatis(struct student *p, int n, int lev[])
{
	for(int i=0; i<n; i++,p++)
		if(p->score >= 90)
            lev[0]++;
		else if(p->score >= 80)
			lev[1]++;
		else if(p->score >= 70)
			lev[2]++;
		else if(p->score >= 60)
			lev[3]++;
		else
			lev[4]++;
        
		return 1;
}
