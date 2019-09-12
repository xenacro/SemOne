#include <stdio.h>
int main()
{
	for(int i=0;i<10;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<20;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else if(i==1 || i==3)
		{
			for(int j=0;j<20;j++)
			{
				printf("0");
			}
			printf("\n");
		}
		else
		{
			for(int j=0;j<20;j++)
			{
				if(j<4 || j>13)
				{
					printf("0");
				}
				else
				{
					printf("*");
				}
			}
			printf("\n");
		}
	}
	return 0;
}