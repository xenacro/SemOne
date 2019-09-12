#include <stdio.h>
int main()
{
	for(int i=0;i<7;i++)
	{
		for(int k=0;k<8-i;k++)
		{
			printf("%d,",0+(4+i)*k);
		}
		printf("\n");
	}
	return 0;
}