#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[100],m[50],c2[50],mn[20];  //name=user name, m=menu
int c1;    //mn= mobile number, c=choice
char ec,nd;  //ec=extra cheese, nd=need delivery
float p,dp,b,p2;    //p=price, dp=delivery price, b=bill

int main()
{
    printf("\nEnter yur name              : ");
    scanf("%s",&name);
    printf("\nEnter your mobile number    : ");
    scanf("%s",&mn);
    printf("\n\n\n");
    printf("\n-----------------------------------------------");
    printf("\n  1. Chicken Barbeque Puzza");
    printf("\n  2. Spring Roll");
    printf("\n-----------------------------------------------");

    printf("\nEnter your choice : ");
    scanf(" %d",&c1);
    fflush(stdin);

    switch(c1)
    {
        case 1:
            strcpy(m,"Chicken Barbeque Pizza");
            p=15.50;
            printf("\nExtra cheese? [Y/N] : ");
            scanf( "%c",&ec);
            fflush(stdin);
            if (ec=='y'|| ec=='Y')
            {
                strcpy(c2,"Cheese");
                p2=3.5;
            }
            else 
            {
                strcpy(c2,"None");
                p2=0;
            }
            break;
        case 2:
            strcpy(m,"Spring Roll");
            p=6.90;
            printf("\nSpicy sauce? [Y/N] : ");
            scanf( "%c",&ec);
            fflush(stdin);
            if (ec=='y'|| ec=='Y')
            {
                p2=1.5;
                strcpy(c2,"Spicy sauce");
            }
            else 
            {
                p2=0;
                strcpy(c2,"None");
            }
            break;
    }

    printf("\nNeed delivery : ");
    scanf(" %c",&nd);

    if (nd=='Y'||nd=='y')
    {
        dp=10;
    }
    else if(nd=='n'||nd=='N')
    {
        dp=0;
    }

    b=p+p2+dp;

    printf("\n---------------------------------------------------------------");
    printf("\n\t\tRECEIPT");
    printf("\n---------------------------------------------------------------");
    printf("\nName               : %s",name);
    printf("\nMobile No.         : %s",mn);
    printf("\n\n\n");
    printf("\nMenu               : %s",m);
    printf("\nMenu Price         : RM %.2f",p);
    printf("\nExtra              : %s",c2);
    printf("\nExtra Price        : RM %.2f",p2);
    printf("\nDelivery           : %c",nd);
    printf("\nDelivery Price     : RM %.2f",dp);
    printf("\n\n\n");
    printf("\nBill               : RM %.2f",b);

    printf("\n\n\n");
    system("pause");
    return 0;


}