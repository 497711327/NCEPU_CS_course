#include <stdio.h>
#include <string.h>

struct book
{
	long   num;           //���
	char   name[20];      //����
	char   marking;       //�ۿձ�־
	float  price;         //�۸�
};

void main()
{
    struct book boo_1, *p;

	p = &boo_1;

	boo_1.num = 89101;
	strcpy(boo_1.name, "math");
	boo_1.marking = 'T';
	boo_1.price = 30;

	printf("���:%ld\n����:%s\n�ۿ�:%c\n���:%f\n", boo_1.num, boo_1.name, boo_1.marking, boo_1.price);
    printf("���:%ld\n����:%s\n�ۿ�:%c\n���:%f\n", (*p).num, (*p).name, (*p).marking, (*p).price);
    printf("���:%ld\n����:%s\n�ۿ�:%c\n���:%f\n", p->num, p->name, p->marking, p->price);

}
