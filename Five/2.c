#include <stdio.h>
int main (void)
{
	for(int i=1;i<=10;i++)
	{
		if(i<=3)
		{
			for(int k=0;k<8;k++)
			{
				printf("0");
			}
			for(int j=0;j<12;j++)
			{
				printf("*");
			}
			printf("\n");
		}else if(i>3 && i<=7)
		{
			for(int l=0;l<20;l++)
			{
				printf("*");
			}
			printf("\n");
		}else
		{
			for(int m=0;m<15;m++)
			{
				printf("*");
			}
			for(int n=0;n<5;n++)
			{
				printf("0");
			}
			printf("\n");
		}
	}
	return 0;
}