#include <stdio.h>
char uc;
float w=0;
float r=0;
float b=0;

int main()
{
	printf("\n----------------------------");
	printf("\nWelcome to Clean Laundry");
	printf("\n----------------------------");
	printf("\nLaundry weight:");
	scanf("%f",&w);
	printf("\nNeed ironing[Y/N]?:");
	scanf(" %c",&uc);
	printf("\nYour Bill");
	printf("\n-------");
	if (uc=='Y'||uc=='y')
	{
	    float i=5;
		if(w<5)
		{
			r=1;
			printf("\nWeight:%.2f",w);
			printf("\nRate:%.2f",r);
			printf("\nIron:Y(RM%.2f)",i);
			b=w*r+i;
			printf("\nBill:RM%.2f",b);
		}
		else
		{
			if(w>5&&w<10)
			{
				r=1.5;
				printf("\nWeight:%.2f",w);
				printf("\nRate:%.2f",r);
				printf("\nIron:Y(RM%.2f)",i);
				b=w*r+i;
				printf("\nBill:RM%.2f",b);
			}
			else
			{
				if(w>10&&w<15)
				{
					r=2;
					printf("\nWeight:%.2f",w);
					printf("\nRate:%.2f",r);
					printf("\nIron:Y(RM%.2f)",i);
					b=w*r+i;
					printf("\nBill:RM%.2f",b);
				}
				else
				{
					if(w>15)
					{
						r=2.5;
						printf("\nWeight:%.2f",w);
						printf("\nRate:%.2f",r);
						printf("\nIron:Y(RM%.2f)",i);
						b=w*r+i;
						printf("\nBill:RM%.2f",b);
					}
				}
			}
		}
	}
	else
	{
		if(uc=='N'||uc=='n')
		{
		    float i=0;
			if(w<5)
		    {
    			r=1;
    			printf("\nWeight:%.2f",w);
    			printf("\nRate:%.2f",r);
    			printf("\nIron:N(RM%.2f)",i);
    			b=w*r+i;
    			printf("\nBill:RM%.2f",b);
		}
		else
		{
			if(w>5&&w<10)
			{
				r=1.5;
				printf("\nWeight:%.2f",w);
				printf("\nRate:%.2f",r);
				printf("\nIron:N(RM%.2f)",i);
				b=w*r+i;
				printf("\nBill:RM%.2f",b);
			}
			else
			{
				if(w>10&&w<15)
				{
					r=2;
					printf("\nWeight:%.2f",w);
					printf("\nRate:%.2f",r);
					printf("\nIron:N(RM%.2f)",i);
					b=w*r+i;
					printf("\nBill:RM%.2f",b);
				}
				else
				{
					if(w>15)
					{
						r=2.5;
						printf("\nWeight:%.2f",w);
						printf("\nRate:%.2f",r);
						printf("\nIron:N(RM%.2f)",i);
						b=w*r+i;
						printf("\nBill:RM%.2f",b);
					}
				}
			}
		}
		}
	}
	return 0;
}