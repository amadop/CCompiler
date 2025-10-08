#include<stdio.h>

int main()
{
int stored_pin = 6969;
int att = 0, n, choice;

do
{
    printf("Please enter Pin:");
    scanf("%d", &n);
        if(n == 6969)
        {
        printf("Access granted\n");
        printf("\n Key Management\n Menu:\n 1. Change Key\n 2. Reset Key to 1234\n 3. Display Current Key\n 4. Exit\n \nEnter Option\n");
        scanf("%d", &choice);
            if(choice == 1)
            {
                printf("Please input new 4-digit code");
                scanf("%d", &stored_pin);
            }
            else if(choice == 2)
            {
                printf("Reset Key to 1234");
                int stored_pin == 1234; 
            }
            else if(choice == 3)
            {
                printf("Stored pin is: %d", stored_pin);
            }
              
        }

        else if(n != 6969 && att <3)
        {
        printf("wrong pin try again");
        att++;
        }
        else(att == 3);
            printf("\nAccess Denied\n");
} while (att != 3);

}
