#include <stdio.h>
int main (void)
{
	for(int i=1;i<=5;i++)
	{
		if(i%2)
		{
			for(int j=0;j<20;j++)
			{
				printf("*");
			}
		}
		else
		{
			for(int k=0;k<10;k++)
			{
			printf("*0");
			}
		}
		printf("\n");
	}
	return 0;
}