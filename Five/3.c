#include <stdio.h>
int main(void)
{
	for(int i=0;i<5;i++)
	{
		if(i%2)
		{
			for(int j=0;j<5;j++)
			{
				printf("0*");
			} 
			printf("\n");
		}
		else
		{
			for(int k=0;k<5;k++)
			{
				printf("*0");
			}
			printf("\n");
		}
	}
	return 0;
}