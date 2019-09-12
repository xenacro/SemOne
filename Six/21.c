#include <stdio.h>
int main()
{
	for(int i=1;i<6;i++)
	{
		for(int k=0;k<((i*i)-i+2)/2;k++)
		{
			printf("%c",65);
		}
		printf("\n");
	}
	return 0;
}