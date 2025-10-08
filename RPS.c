#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int getComputerChoice()
 {
      return (rand()%3)+1; 
 }

 int decideWinner(int playerChoice, int computerChoice)
 {
    if(playerChoice==computerChoice)
        return 0;
    if((playerChoice ==1 && computerChoice ==3) || (playerChoice ==2 && computerChoice ==1) || (playerChoice ==3 && computerChoice ==2))
        return 1;
     if(( computerChoice==1 && playerChoice ==3) || (computerChoice ==2 && playerChoice ==1) || (computerChoice ==3 && playerChoice ==2))
        return -1;    
 }

 int main()
 {
    int userCh,rch,w,l;
    
    do
    {
        printf("Enter number of rounds 5 or 10:");
        scanf("%d",&rch); 
    } while (rch != 5 && rch !=10); 

    for(int i=0;i<rch;i++)
    {
        printf("1.Rock 2.Paper 3.Scissors\n");
        printf("Enter users choice:");
        scanf("%d", &userCh);

                if(userCh ==1)
                {
                    printf("Rock\n");
                }   
                
                else if(userCh ==2)
                {
                    printf("Paper\n");
                }
                else if(userCh ==3)
                {
                    printf("Scissors\n");
                }

        int comCh = getComputerChoice();
                if(comCh ==1)
                {
                printf("Com chose:Rock\n");
                }
                else if(comCh ==2)
                {
                printf("Com chose:Paper\n");
                }
                else if(comCh ==3)
                {
                printf("Com chose:Scissors\n");
                }
        int result = decideWinner(userCh,comCh);
                if(result ==0)
                printf("Draw!\n");
                else if(result >0)
                {
                    printf("Winner\n");
                    w++;
                }
                else if(result <0)
                {
                    printf("LOSER!\n");
                    l++;
                }
        }
    }


 

