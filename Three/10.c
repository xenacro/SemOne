#include <stdio.h>
int main(void)
{
	int a,b,c,d,x,c0,c11,c12,c13,c14,c21,c22,c23,c24,c25,c26;
	printf("Entre 5 numbers for a,b,c,d,x:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
	c0= x!=a && x!=b && x==c && x!=d;
	c13= x!=a && x==b && x!=c && x!=d;
	c14= x==a && x!=b && x!=c && x!=d;
	c21=x!=a && x!=b && x==c && x==d;
	c22=x!=a && x==b && x!=c && x==d;
	c23=x==a && x!=b && x!=c && x==d;
	c24=x!=a && x==b && x==c && x!=d;
	c25=x==a && x!=b && x==c && x!=d;
	c26=x==a && x==b && x!=c && x!=d;
	if(c0)
	{
		printf("0\n");
	} else
	{
		if(c11 || c12 || c13 || c14)
		{
			printf("1");
		} else
		{
			if(c21 || c22 || c23 || c24 || c25 || c26)
			{
				printf("2");
			} else
			{
				if(!c11 || !c12 || !c13 || !c14)
				{
					printf("3\n");
				} else
				{
					if(!c0)
					{
						printf("4");
					}
				}
			}
		}
	}
	return 0;
}