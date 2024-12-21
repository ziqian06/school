#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sub=0;
char subc[50];
int get_credit_hours();
int ch;
float fee,total,total_fee;
void display_records(int x);

int main()
{
    printf("\nHow many subject to register : ");
    scanf("%d",&sub);
    while(sub>3 || sub<1)
    {
        printf("\nMaximum number to register is 3 subjects. Please key-in again");
        scanf("%d",&sub);
    }
    int sc;
    for(int sc=1;sc<=sub;sc++)
    {
        printf("\nSubject #%d",sc);
        printf("\nEnter the subject code : ");
        scanf("%s",&subc);
        get_credit_hours(ch);
        fee=150*ch;
        display_records(ch);
        total+=fee;
        
    }
    printf("\nTotal fee to be paid : RM %.2f",total);

    
    

    printf("\n\n\n");
    system("pause");
    return 0;
}

int get_credit_hours()
{
    if(strcmp(subc,"DCS5038")==0)
    {
        ch=4;
    }
    else if(strcmp(subc,"DET5078")==0)
    {
        ch=3;
    }
    else if(strcmp(subc,"DPR5038")==0)
    {
        ch=2;
    }
    return ch;

}

void display_records(int x)
{
    switch(x)
    {
        case 4:
            printf("\nSubject Code : %s",subc);
            printf("\nCredit Hour : %d ",ch);
            printf("\nTotal Fee : RM%.2f",fee);
            break;
        case 3:
            printf("\nSubject Code : %s",subc);
            printf("\nCredit Hour : %d ",ch);
            printf("\nTotal Fee : RM%.2f",fee);
            break;
        case 2:
            printf("\nSubject Code : %s",subc);
            printf("\nCredit Hour : %d ",ch);
            printf("\nTotal Fee : RM%.2f",fee);
            break;
    }
}