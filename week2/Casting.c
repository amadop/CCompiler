#include<stdio.h>

int main()
{

   int var1 ,var2; 

   printf("Enter the first number");
   scanf("%d",&var1);


   printf("Enter the second number");
    scanf("%d",&var2);
    
    printf("lt=%d", var1<var2);
    printf("let=%d", var1<=var2);
    printf("gt=%d", var1>var2);
    printf("get=%d", var1>=var2);
    printf("eq=%d", var1==var2);
    printf("neq=%d", var1!=var2);
}