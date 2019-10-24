#include "stdio.h"
#include "string.h"
#include "process.h"

#define MAXSIZE 50

/*ѧ����Ϣ�ṹ����*/
struct student{
   char sNo[10];
   char sName[10];
   float fScore[3];
   float fTotal;
};

/*ѧ����Ϣ��ṹ����*/
struct sqlist{
	struct student elem[50];
	int length;
};

/*����һ���ձ�*/
void Init(sqlist *sl)
{
	sl->length = 0;
}

/*���ѧ����Ϣ��*/
int OutPut(sqlist sl)
{
	if(!sl.length)
	{
		printf("��Ϊ�գ�");
		return 0;
	}

	printf("������(����%d����¼)��",sl.length);
	printf("\nѧ��\t����\t�ɼ�1\t�ɼ�2\t�ɼ�3\t�ܳɼ�\t\n ");
	for(int i=0; i<sl.length; i++)
	{
		printf("%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t\n",sl.elem[i].sNo,sl.elem[i].sName,
			sl.elem[i].fScore[0],sl.elem[i].fScore[1],sl.elem[i].fScore[2],sl.elem[i].fTotal);
	}
	return 1;
}
/*����һ��ѧ����Ϣ*/
int Append(sqlist *sl, struct student elem)
{
	if(sl->length == 50) 
	{
		printf("���������ܲ���");
		return 0;
	}
	
   sl->elem[sl->length] = elem;
   sl->elem[sl->length].fTotal = 0;

   for(int i=0; i<3; i++)
	    sl->elem[sl->length].fTotal += sl->elem[sl->length].fScore[i];
	sl->length++;
	return 1;
}
/*ɾ��һ��ѧ����Ϣ*/
int Delete(sqlist *sl, char *no)
{
	if(!sl->length) 
	{
		printf("��գ�����ɾ��");
		return 0;
	}
	
	for(int i = 0; i < sl->length; i++)
		if(strcmp (sl->elem[i].sNo, no) == 0)
			break;

	if(i < sl->length)                
	{
		for(int j=i; j<sl->length; j++ )
			sl->elem[j] = sl->elem[j+1];
		sl->length--;

		return 1;
	}
	else return 0;

}
/*����ѧ�Ų���һ��ѧ����Ϣ*/
int Find(sqlist sl, char *no)
{
	for(int i=0; i<sl.length;i++)
		if(strcmp(sl.elem[i].sNo,no)==0)
		{
			printf("�ҵ���ѧ���ɼ���Ϣ\n%s\t%s\t%f\t%f\t%f\n",sl.elem[i].sNo,
           sl.elem[i].sName,sl.elem[i].fScore[0],sl.elem[i].fScore[1],sl.elem[i].fScore[2]);
		return 1;
		}
	if(i>sl.length-1)
	{
		printf("û�иü�¼��");
		return 0;
	}
}

main()
{
	char    ch;                      //��������
	sqlist   sl;                      //ѧ����ṹ�������洢ѧ����Ϣ
	char    no[10];                  //��־�����溯������ֵ
    int     flag;

	printf("/******ѧ���ɼ�����ϵͳ*****/\n");
	printf("\n��ϵͳ�����������£�\n  0���˳�\n  1����ʼ��\n  2: ���\n");
	printf("  3: ����\n  4: ɾ��\n  5: ��ѧ�Ų�ѯ\n \n");
	printf("�����������ʾ��(0~5)");
	
	while(1)
	{
		ch = getchar();
		switch(ch)
		{
		case '0':
	        exit(1);
			break;
		case '1':
		    Init(&sl);
			break;
		case '2':
			OutPut(sl);
			break;
		case '3':
			struct  student elem;
			printf("�������Ԫ�أ�ѧ�� ���� �ɼ�1 �ɼ�2 �ɼ�3\n");
			scanf("%s%s%f%f%f",elem.sNo,elem.sName,&elem.fScore[0],&elem.fScore[1],&elem.fScore[2]);
			flag = Append(&sl,elem);
			if(flag) printf("����ɹ���");
			else printf("����ʧ�ܣ�");
			break;
		case '4':
			printf("����ɾ��ѧ�ţ�");
			scanf("%s",no);
			flag = Delete(&sl,no);
			if(flag) printf("ɾ���ɹ���");
			else printf("ɾ��ʧ�ܣ�");
			break;
		case '5':
			printf("����ѧ�ţ�");
			scanf("%s",no);
			flag = Find(sl,no);
			break;
		default:
			continue;
		}
	    printf("�����������ʾ��(0~6)");	
	}
}
