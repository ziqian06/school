#include <stdio.h>
#include <stdlib.h>
#define inch 0.394


void get_input();
void cm_to_inches(float x);
char uc;

int main()
{

    do
    {
        get_input();
        printf("\nContinue <Y - Yes    N - No >: ");
        scanf(" %c", &uc);
    }
    while(uc=='Y');
    printf("\nProgram ends");

    printf("\n\n\n");
    system("pause");
    return 0;

}

void get_input()
{
    float cm;
    printf("\n Enter centmeter : ");
    scanf("%f",&cm);
    cm_to_inches(cm);
}

void cm_to_inches(float cm)
{
    float ncm=cm*inch;
    printf("\n%.2f cm is equals to %.2f inches",cm,ncm);
    
}