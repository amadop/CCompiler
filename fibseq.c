#include<stdio.h>


int fib_iterative(int n)
{
    int a = 0, b = 1, next, i;
    
    if(n == 0)
        return a;
    else if(n == 1)
        return b;
    for(i = 2; i<=n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}


int fib_recursive(int n);


int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Fibonacci (Iterative): %d\n", fib_iterative(n));
    printf("Fibonacci (Recursive): %d\n", fib_recursive(n));

    return 0;
}