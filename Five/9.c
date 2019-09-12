#include <stdio.h>
int main()
{
	for(int i=0;i<9;i++)
	{
		if(i<=2)
		{
			for(int j=0;j<20;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(int j=0;j<8-i;j++)
			{
				printf("*");
			}
			for(int k=0;k<2+2*(i-3);k++)
			{
				printf("0");
			}
			for(int l=0;l<16-i;l++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}