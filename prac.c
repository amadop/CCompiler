#include <stdio.h>

int main()

{   int n;
    char dep[50], name[50]; 
    printf("Welcome to C Programming!\n");
    printf("Name?\n");
    fgets(name, sizeof(name), stdin);
    printf("Name:%s\n", name);
    fgets(dep, sizeof(dep), stdin);
   
    printf("Age?\n");
    scanf("%d", &n);
    printf("Age: %d\n", n);

    printf("Department?\n");
    fgets(dep, sizeof(dep), stdin);
    printf("department:%s\n", dep);
    return 0;
}