#include <stdio.h>
int main(void)
{
	for(int i=0;i<4;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<4;j++)
			{
				printf("0****");
			} 
			printf("\n");
		}
		else
		{
			for(int k=0;k<4;k++)
			{
				printf("*0000");
			}
			printf("\n");
		}
	}
	return 0;
}