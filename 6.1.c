#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char ch;
char get_choice();  //prototype
void calculate(int x, int y, char z); // no return value


int main()
{
    char uc;
    int num1,num2;
    
    printf("\nA. Addnumbers");
    printf("\nB. Multiply numbers");
    printf("\nC. Substract numbers");
    printf("\nD. Remainder of numbers");
    printf("\nE. Power pf numbers");
    
    uc=get_choice();

    printf("\nEnter 2 numbers : ");
    scanf("%d %d",&num1,&num2);
    calculate(num1,num2,ch);

    printf("\n\n\n");
    system("pause");
    return 0;
}


char get_choice()
{
    printf("\nWhat is your chocie : ");
    scanf(" %c",&ch);
    while(ch !='A'&& ch!='B'&& ch!='C'&&ch!='D'&& ch!='E')
    {   
        printf("\nWhat is your chocie : ");
        scanf(" %c",&ch);
    } 
    return ch;
}

void calculate(int x, int y, char z)
{
    int ans;
    switch(z)
    {
        case 'A':
            ans=x+y;
            break;
        case 'B':
            ans=x*y;
            break;
        case 'C':
            ans=x-y;
            break;
        case 'D':
            ans=x%y;
            break;
        case 'E':
            ans=pow(x,y);
            break;
    }
    printf("\nAnswer : %d ",ans);
}