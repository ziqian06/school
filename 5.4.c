#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ch; //choice
    char bc[100]; //book code
    float p,q,b,tc;
    int b1=0,b2=0,b3=0;
    while(1)
    {
        printf("\nWould you like to purchase books? [Type 1 to continue] : ");
        scanf(" %d",&ch);
        if(ch != 1)
        {
            break;
        }
        
        while(ch=1)
        {
            printf("\n\n\n");
            printf("\nEnter Book code      : ");
            scanf("%s",&bc);
            if(strcmp(bc,"B1001")==0)
            {
                p=34.5;
            }
            else if(strcmp(bc,"B1002")==0)
            {
                p=77.3;
            }
            else if(strcmp(bc,"B1003")==0)
            {
                p=54.9;
            }
            else
            {
                printf("\nYour Book code is invalid. Current purchase cancelled.");
                break;
            }
            
            printf("\nEnter quantity  : ");
            scanf("%f",&q);
            if(strcmp(bc,"B1001")==0)
            {
                b1+=q;
            }
            else if(strcmp(bc,"B1002")==0)
            {
                b2+=q;
            }
            else if(strcmp(bc,"B1003")==0)
            {
                b3+=q;
            }
            b=p*q;
            printf("\nBill = RM %.2f",b);
            tc+=b;
            break;
        }
        
    }
    if(tc!=0)
    {
        printf("\nTotal collection   : RM %.2f",tc);
        printf("\nTotal Book 1 sold : %d",b1);
        printf("\nTotal Book 3 sold : %d",b2);
        printf("\nTotal Book 3 sold : %d",b3);
    }
    else 
    {
        printf("\nNo purchase made.");
    }


    printf("\n\n\n");
    system("pause");
    return 0;
}