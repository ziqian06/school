#include <stdio.h>
#include <stdlib.h>

int hin,min,hout,mout;
float calculateCharges(int w,int x,int y,int z);
float total;
void display(float total);

int main()
{
    printf("\nTime in (HH) : ");
    scanf("%d",&hin);
    printf("\nTime in (MM) : ");
    scanf("%d",&min);
    printf("\nTime out (HH) : ");
    scanf("%d", &hout);
    printf("\nTIme out (MM) : ");
    scanf("%d",&mout);
    total = calculateCharges(hin,hout,min,mout);
    display(total);

    printf("\n\n\n");
    system("pause");
    return 0;
}

float calculateCharges(int w,int x,int y,int z)
{
    int hour,minute;
    float fee;
    hour=x-w;
    minute=z-y;
    printf("\nYou have paked for %d hour(s) and %d minute(s)",hour,minute);
    if(hour<=3)
    {
        fee=1.5;
    }
    else if(hour>3)
    {
        fee=1.5+(hour-3);
        if(minute>0)
        {
            fee+=1;
        }
    }
    return fee;
}

void display(float total)
{
    printf("\nTotal charges = $ %.2f",total);
} 