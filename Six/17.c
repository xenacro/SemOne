#include <stdio.h>
#include <stdlib.h>
int main()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6-i;j++)
		{
			for(int k=0;k<1+i;k++)
			{
				printf("%c",65+i+j);
			}
		}
		printf("\n");
	}
	return 0;
}