#include <stdio.h>
int main()
{
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6-i;j++)
		{
			printf("%c",65+j);
		}printf("\n");
	}
	return 0;
}