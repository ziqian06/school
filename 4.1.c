#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//mv=movie name, mc=movie code, nt=number of tickets, d=day, p=price, tp=total price,dic=discount
char mv[50];
char d;
int mc;
float nt,p,tp,dic;

int main()
{
    printf("\n---------------------------------------------------------------");
    printf("\n\t\tMOVIE TITLE");
    printf("\n---------------------------------------------------------------");
    printf("\n1. Mission: Impossible - Fallout(RM 13.00)");
    printf("\n2. Ant-Man and The Wasp         (RM 12.00)");
    printf("\n---------------------------------------------------------------");

    printf("\n\n\n");
    printf("\nEnter movie code : ");
    scanf("%d",&mc);
    
    if (mc==1)
    {
        strcpy(mv," Mission: Impossible - Fallout");
        p=13;
    }
    else if(mc==2)
    {
        strcpy(mv,"Ant-Man and The Wasp");
        p=12;
    }
    else 
    {
        printf("\nInvalid Movie Code!");
        printf("\n\n\n");
        system("pause");
        exit(0);
    }

    printf("\nEnter number of ticket : ");
    scanf("%f",&nt);
    printf("\nEnter movie day (1-7; 1 for Mon, 2 for Tue etc): ");
    scanf("%d",&d);

    switch(d)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            if (mc==1)
            {
                dic=0.2;
            }
            else if (mc==2)
            {
                dic=0.3;
            }
            break;
        
        case 6:
        case 7:
            dic=0;
            break;
        
        default:
            tp=0;
    }

    tp=nt*p*(1-dic);

    if(tp==0)
    {
        printf("Invalid day selection!!");
        printf("\n\n\n");
        system("pause");
        exit(0);
    }

    printf("\n---------------------------------------------------------------");
    printf("\n\t\tRECEIPT");
    printf("\n---------------------------------------------------------------");

    printf("\nMovie          : %s",mv);
    printf("\nNo. of Ticket  :  %.f", nt);
    printf("\nTotal price    : RM %.2f",tp);

    system("pause");
    return 0;
}