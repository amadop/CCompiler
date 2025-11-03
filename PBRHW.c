#include<stdio.h>

void addByreference(int *num);

int main()
{
int a;

printf("Enter an integer:");
scanf("%d", &a);
printf("Before function call:%d\n", a);

addByreference(&a);

printf("after function call:%d\n", a);

return 0;
}

void addByreference(int *num){
*num = *num + 5;
}