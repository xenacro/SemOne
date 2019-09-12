#include <stdio.h>
int main()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<1+i;j++)
		{
			printf("%c",65);
		}
		printf("\n");
	}
	return 0;
}