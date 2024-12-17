#include <stdio.h>
#include <stdlib.h>

int main()
{
    char uc; //user choice
    char nc[50]; //name of company
    int fd; // frequency of donation
    float ad,ta=0,td=0; //amount of donation, total client,total amount, total donation
    int tc=0;

    while (1)
    {   
        printf("\nDonation from clients? [Enter Y to continue]: ");
        scanf(" %c",&uc);
        if(uc !='y'&& uc !='Y')
        {
            break;
        }
        ta=0;
        tc++;
        printf("\nEnter client 's name            : ");
        scanf("%s",&nc);
        fflush(stdin);
        printf("\nEnter frequency of donation     : ");
        scanf("%d",&fd);
        

        for(int i=0;i<fd;i++)
        {
            printf("\nEnter amount of donation        : RM ");
            scanf("%f",&ad);
            ta+=ad;

        }

        printf("\nTotal donation from %s  : RM %.2f", nc, ta);
        td+=ta;
    }

    printf("\nTotal Clients                : %d",tc);
    printf("\nTotal Donations              : RM %.2f",td);

    printf("\n\n\n");
    system("pause");
    return 0;
}