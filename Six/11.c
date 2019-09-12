#include <stdio.h>
int main()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<1+i;j++)
		{
			printf(" ");
		}
		for(int k=i;k<6;k++)
		{
			printf("%c",65+k);
		}
		printf("\n");
	}
	return 0;
}