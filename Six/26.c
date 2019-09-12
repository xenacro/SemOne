#include <stdio.h>
int main()
{
	for(int i=0;i<7;i++)
	{
		int n=i<4?i:4;
		for(int k=0;k<8-n;k++)
		{
			printf("%d,",0+(4+i)*k);
		}
		printf("\n");
	}
	return 0;
}