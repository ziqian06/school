#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char name[100],id[100];
float fee,tcf,af,i;
int dy;


int main()
{
    printf("\nEnter name                      : ");
    scanf("%s",&name);
    printf("\nEnter ID                        : ");
    scanf("%s",&id);
    printf("\nEnter fee(RM)                   : ");
    scanf("%f",&fee);
    printf("\nEnter duration of study (years) : ");
    scanf("%d",&dy);
    printf("\n\n\n");
    printf("\n----------------------------------");
    printf("\nMULTIMEDIA UNIVERSITY");
    printf("\n----------------------------------");
    printf("\nStudent name        : %s",name);
    printf("\nStudent ID          : %s",id);
    printf("\nDuration of study   : %d",dy);
    printf("\nYear       Course Fee");
    af=fee;

    int y=1;
    do
    {
        printf("\n%d            RM %.2f",y,af);
        tcf+=af;
        af*=1.05;
        y++;    
    } 
    while (y<=dy);
    printf("\n----------------------------------");
    printf("\nTotal Course Fees : RM %.2f",tcf);
    printf("\n----------------------------------");

    printf("\n\n\n");
    system("pause");
    return 0;

}