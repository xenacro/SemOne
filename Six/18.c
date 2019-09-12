#include <stdio.h>
#include <stdlib.h>
int main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<4-i;j++)
		{
			printf(" ");
		}
		for(int k=0;k<2*i+1;k++)
		{
			printf("%c",65+i-abs(i-k));
		}
		printf("\n");
	}
	return 0;
}