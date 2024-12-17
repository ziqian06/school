#include <stdio.h>
#include <string.h>
// rc=room code, rt=room type,trp=total room price
char rc;
char rt;
float rp=0;
float trp=0;
char name[30];
float nd=0;

int main()
{
    printf("\n----------------------------");
    printf("\nWELCOME TO LEGEND HOTEL");
    printf("\n----------------------------");
    printf("\nRooms :Deluxe(1 or D)  Twin Sharing(2 or T)  Single(3 or S)");
    printf("\n\n\n");

    printf("\nEnter Your Name:");
    scanf(" %c",&name);
    printf("\nEnter Room code:");
    scanf(" %c",&rc);
    printf("\nEnter number of days:");
    scanf("%f",&nd);

    switch(rc)
    {
        case 1:
        case 'D':
        case 'd':
            rp=200.00;
            rt="Deuxe";
            break;
        
        case 2:
        case 'T':
        case 't':
            rp=170.00;
            rt="Twin Sharing";
            break;
        
        case 3:
        case 'S':
        case 's':
            rp=120.00;
            rt="Single";
            break;
        
        default:
            printf("Invalid room code entered");
            rc=0;

    }

    trp=rp*nd;

    printf("\n----------------------------");
    printf("\nPAYMENT RECEIPT");
    printf("\n----------------------------");
    printf("\nCustomer Name: %s",name);
    printf("\nRoom Type: %c",rt);
    printf("\nRoom Price:RM %.2f",rp);
    printf("\nNumber of days: %f",nd);
    printf("\nBill:RM %.2f",trp);
    return 0;
}