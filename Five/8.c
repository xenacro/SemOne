#include <stdio.h>
int main()
{
	for(int i=0;i<10;i++)
	{
		if(i==9 || i==8)
		{
			for(int j=0;j<20;j++)
			{
				printf("*");
			}printf("\n");
		}
		else if(i<=6)
		{
			for(int j=0;j<6-i;j++)
			{
				printf("0");
			}
			for(int k=0;k<5+i;k++)
			{
				printf("*");
			}
			for(int l=0;l<9;l++)
			{
				printf("0");
			}printf("\n");
		}
		else
		{
			for(int j=0;j<11;j++)
			{
				printf("*");
			}
			for(int k=0;k<9;k++)
			{
				printf("0");
			}
			printf("\n");
		}
	}
	return 0;
}