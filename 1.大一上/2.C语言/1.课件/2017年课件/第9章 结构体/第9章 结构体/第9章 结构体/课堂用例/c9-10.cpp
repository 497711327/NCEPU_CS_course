#include <stdio.h>
#include <string.h>
#include <process.h>

#define MAXSIZE 50

/*��ϵ�˽ṹ����*/
struct TelInfo{
char name[10];
char telno[10];
};
int   Append(struct TelInfo telList[], int *len, struct TelInfo telInfo);
char* Find(struct TelInfo telList[], int *len, char *name);
int   Delete(struct TelInfo telList[], int *len, char *name);
void  Out(struct TelInfo telList[], int len);

/*������ϵ�ˣ�����ɹ�����1�����򷵻�0*/
int Append(struct TelInfo telList[], int *len, struct TelInfo telInfo)
{
	int length;                //�ֲ���������ĳ���
	length = *len;        

	if( length == MAXSIZE)
        return 0;
	telList[length] = telInfo;
	length ++;

	*len = length;
	return 1;
}

/*������ϵ�˲��ҵ绰�ţ����ҳɹ�����ָ��绰�ŵ�ָ�룬���򷵻ؿ�ָ��*/
char* Find(struct TelInfo telList[], int *len, char *name)
{ 
	int length = *len;

	for(int i = 0; i < length; i++)
		if(strcmp (telList[i].name, name) == 0)
			return telList[i].telno;
	return NULL;
}

/*ɾ��ָ����������ϵ�ˣ�ɾ���ɹ�����1�����򷵻�0*/
int Delete(struct TelInfo telList[], int *len, char *name)
{
	int length = *len;

	for(int i = 0; i < length; i++)
		if(strcmp (telList[i].name, name) == 0)
			break;

	if(i < length)                // ɾ��telList[i]
	{
		for(int j=i; j<length; j++ )
			telList[j] = telList[j+1];
		(*len)--;

		return 1;
	}
	else return 0;
}

void Out(struct TelInfo telList[], int len)
{
	int length = len;

	printf("\n����        ����\n");
	for(int i=0; i<length; i++)
	{
	    printf("%10s%10s\n", telList[i].name, telList[i].telno);
	}
}

void main()
{
	int     choice;                         //������
	char    name[10];                       //��ϵ������
	struct  TelInfo telList[MAXSIZE];          //��ϵ����Ϣ�ṹ����
	int     len = 0;                         //�绰���е�ǰ��¼�� 

	while(1)
	{
		printf("�ֻ�ͨѶ¼����ѡ�1������ 2��ɾ�� 3����ѯ 4: ��� 0���˳�\n");
		printf("��ѡ�������");
        scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			struct TelInfo  tel;
			printf("����Ҫ������������绰���Կո������\n");
			scanf("%s%s",tel.name, tel.telno);
			Append(telList, &len, tel);
			break;
		case 2:
			printf("������Ҫɾ������ϵ��������\n");
			scanf("%s",name);
			Delete(telList, &len, name);
			break;
		case 3:
			printf("������Ҫ���ҵ���ϵ������:\n");
			scanf("%s", name);
		    if(char *p = Find(telList, &len, name))
				printf("����ϵ�˵ĵ绰Ϊ��%s\n", p);
			else
				printf("û�и���ϵ�ˣ�\n");

			break;
		case 4:
			printf("�绰�����Ϊ��");
			Out(telList, len);
			break;
		case 0:
			exit(1);
			break;
		default:
			continue;
		}
	}
}
