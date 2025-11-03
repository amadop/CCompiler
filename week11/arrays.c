#include<stdio.h>

int main()
{
    int arr[10],arr2[10],arr3[3][3],arr4[3][3];


    for(int i=0;i<10;i++)
    {
        arr[i]= (i+1)*(i+1);
        arr2[i]= i*i*i;
    }

    int even =2, odd=1;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr3[i][j] = even;
            arr4[i][j] = odd;
            even= even+2;
            odd= odd+2;
        }
    }
    printf("1D arrays are: \n");
        printf("1st array:\n");
        for(int i=0; i<10;i++)
        {
            printf("%d ",arr[i]);
        }
          printf("2nd array:\n");
        for(int i=0; i<10;i++)
        {
            printf("%d ",arr2[i]);
            
        }
    printf("2D arrays are: \n", arr3, arr4);
      printf("1st 2D array:\n");
        for(int i=0; i<3;i++)
        {
            for(int j=0; j<3;j++)
            {
            printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
        printf("2nd 2D array:\n");
        for(int i=0; i<3;i++)
        {
            for(int j=0; j<3;j++)
            {
            printf("%d ",arr4[i][j]);
            }
            printf("\n");
        }
        
}