#include <stdio.h>
int main()
{
	for(int i=0;i<6;i++)
	{
		for(int k=0;k<1+i;k++)
		{
			printf("%d ",(k+1)*(k+2)/2);
		}
		printf("\n");
	}
	return 0;
}