#include <stdio.h> 
void main(void)
{
    int a, b;
    printf("input two numbers:     ");
    scanf("%d%d", &a, &b);
    if(a>b)
      printf("%d �������\n", a);
    else
      printf("%d �������\n", b);
}

