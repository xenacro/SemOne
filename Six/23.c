#include <stdio.h>
int main()
{
	for(int i=0;i<6;i++)
	{
		for(int k=0;k<i+1;k++)
		{
			printf("%c",85-(((3*i)+(i*i))/2)+k);
		}
		printf("\n");
	}
	return 0;
}