#include <stdio.h>
int main()
{
	for(int i=0;i<10;i++)
	{
		if(i==0 || i==1)
		{
			for(int j=0;j<20;j++)
			{
				printf("*");
			}printf("\n");
		}else if(i==8 || i==9)
		{
			for(int j=0;j<20;j++)
			{
				printf("0");
			}printf("\n");
		} else
		{
		for(int j=0;j<6+2-i;j++)
		{
			printf("*");
		}
		for(int k=0;k<2+3*(i-2);k++)
		{
			printf("0");
		}
		for(int l=0;l<2*(6+2-i);l++)
		{
			printf("*");
		}
		printf("\n");
		}
	}
	return 0;
}