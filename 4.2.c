#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int dc; //dc=destination code
char rt;  //rt=return ticket, d=destination 
char d[50];
float na,nc,p,tp,tpa,tpc;  //na=number of adult, nc=number of children, p=price, tp=total price

int main()
{
    printf("\n---------------------------------------------------------------");
    printf("\n\t\tDESTINATION");
    printf("\n---------------------------------------------------------------");
    printf("\n  1.  Penang      (RM 45.00)");
    printf("\n  2.  Kelantan    (RM 38.00)");
    printf("\n  3.  Perlis      (RM 63.00)");
    printf("\n---------------------------------------------------------------");
    
    printf("\nReturn Ticket [Y/N]      : ");
    scanf("%c",&rt);
    printf("\nEnter destination code   : ");
    scanf("%d",&dc);
    printf("\nEnter adult              : ");
    scanf("%f",&na);
    printf("\nEnter child              : ");
    scanf("%f",&nc);

    switch(dc)
    {
        case 1:
            strcpy(d,"Penang");
            p=45;
            break;
        
        case 2:
            strcpy(d,"Kelantan");
            p=38;
            break;
        
        case 3:
            strcpy(d,"Perlis");
            p=63;
            break;
    }

    tpa=p*na;
    tpc=p*0.5*nc;

    if (rt=='Y'||rt=='y')
    {
        tp=2*(tpa+tpc);
    }
    else if(rt=='N'||rt=='n')
    {
        tp=tpa+tpc;
    }

    printf("\n---------------------------------------------------------------");
    printf("\n\t\tRECEIPT");
    printf("\n---------------------------------------------------------------");
    printf("\nDestination         : %s",d);
    printf("\nPrice               : RM  %.2f",p);
    printf("\nAdult               : %.f",na);
    printf("\nChlid               : %.f",nc);
    printf("\nAdult Price         : RM  %.2f",tpa);
    printf("\nChild Price         : RM  %.2f",tpc);
    printf("\nReturn Ticket       : %c",rt),
    printf("\nPayment             : RM  %.2f",tp);

    printf("\n\n\n");
    system("pause");
    return 0;

}