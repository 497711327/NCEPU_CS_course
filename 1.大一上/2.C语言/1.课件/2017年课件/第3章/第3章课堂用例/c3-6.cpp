#include <stdio.h> 
void main(void)
{
    int a, b, c, max;
    printf("����������: ");
 	scanf("%d%d%d", &a, &b, &c);
	    max=a;
    if(b>max) max=b;
  	if(c>max) max=c;
 	printf("%d �������\n", max);
}
