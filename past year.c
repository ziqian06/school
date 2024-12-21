#include <stdio.h>
#include <stdlib.h>
float numEnter;
int i;
float average(float sum,int count);
float av;

int main()
{
    float sum=0;
    int count;
    printf("\nPlease enter 3 numbers below: ");
    for (i=1;i<=3;i++)
    {
        printf("\nEnter number %d : ",i);
        scanf("%f",&numEnter);
        sum+=numEnter;
    }
    count =i;
    float avr=average(sum,count);
    printf("\nThe average value : %.2f",avr);
    printf("\n\n\n");
    system("pause");
    return 0;

}

float average(float sum,int count)
{
    return sum/count;

}