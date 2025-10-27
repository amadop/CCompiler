#include<stdio.h>

int addByvalue(int a);

int main()
{
int a, result;
printf("Select an integer:");
scanf("%d", &a);

addByvalue(a);

result = addByvalue(a);

printf("Result: %d", result);

return 0;
}

int addByvalue(int a)
{
    if(a > 0){
          a = a + 5;
    return a;
    }
    else if (a == 0)
    {
        return 5;
    }
       


}
