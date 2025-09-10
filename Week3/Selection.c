#include<stdio.h>

void main()
{
    int num;

    printf("Enter the grade");
    scanf("%d",&num);

    if(num >= 90)
    {
        printf("A");
    }
    else if(num >=75 )
    {
        printf("B");
    }
    else
        printf("C");
}