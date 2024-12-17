#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float am,q1,q2,tqm;
char toa;
char as[50];
char at[50];

int main()
{
    printf("Enter type of assessment:");
    scanf("%c",&toa);

    switch(toa)
    {
        case 'Q':
        case 'q':
            strcpy(at,"Quiz");
            printf("\nEnter Quiz 1 and Quiz 2 marks:");
            scanf("%f %f",&q1,&q2);
            tqm=q1+q2;
            printf("\nAssessment Type:%s",at);
            printf("\nQuiz total:%.2f",tqm);
            break;
        
        case 'A':
        case 'a':
            strcpy(at,"Assessment");
            printf("\nEnter assignment marks:");
            scanf("%f",&am);
            if(am>=0 && am<50)
            {
                strcpy(as,"Re-do Assignment");
            }
            else if(am >=50 && am <70)
            {
                strcpy(as,"Good");
            }
            else if (am>=70 && am<=100)
            {
                strcpy(as,"Excellent");
            }
            else
            {
                strcpy(as,"Not available");
            }
            printf("\nAssessment Type:%s",at);
            printf("\nStatus:%s",as);
            break;
        
        default:
            printf("\nInvalid assessment code entered");

    }  

    printf("\n");
    system("pause");
    return 0;  
}

