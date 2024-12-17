#include <stdio.h>
#include <stdlib.h>

char name[100]; //name=product name
float p,sum; //p=price
int ct; //ct=counter

/*int main()
{
    for (ct=1;ct <=3;ct++)  //expression=condition=when to stop
    {
        printf("\nEnter product's name :");
        scanf("%s",&name);
        fflush(stdin);
        
        printf("\nEnter the price    : RM");
        scanf("%f",&p);
        fflush(stdin);
        printf("\n%s : RM %.2f",name,p);

        sum=sum+p;

    }

    printf("\nTotal amount : RM %.2f",sum);

    printf("\n\n\n");
    system("pause");
    return 0;
} */

/*int main()
{
    ct=1;
    while(ct<=3)
    {
        printf("\nEnter product's name :");
        scanf("%s",&name);
        fflush(stdin);
        
        printf("\nEnter the price    : RM");
        scanf("%f",&p);
        fflush(stdin);
        printf("\n%s : RM %.2f",name,p);

        sum=sum+p;
        ct ++;
    }
    printf("\nTotal amount : RM %.2f",sum);

    printf("\n\n\n");
    system("pause");
    return 0;
}*/

int main()
{
    ct=1;
    do
    {
        printf("\nEnter product's name :");
        scanf("%s",&name);
        fflush(stdin);
        
        printf("\nEnter the price    : RM");
        scanf("%f",&p);
        fflush(stdin);
        printf("\n%s : RM %.2f",name,p);

        sum=sum+p;
        ct ++;
    } while (ct<=3);

    printf("\nTotal amount : RM %.2f",sum);

    printf("\n\n\n");
    system("pause");
    return 0;
    
}
