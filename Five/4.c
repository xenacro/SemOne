#include <stdio.h>
int main(void)
{
	for(int i=0;i<6;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<30;j++)
			{
				printf("0");
			} 
			printf("\n");
		}
		else
		{
			for(int k=0;k<2;k++)
			{
				printf("*00*0**00**0*00");
			}
			printf("\n");
		}
	}
	return 0;
}