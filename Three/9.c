#include <stdio.h>
int main (void)
{
	int a,b,c,d,x;
	printf("Input the values of a, b, c, d, x:\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);
	if(x==a)
	{
		printf("x = a\n");
	} else
	{
		if(x==b)
		{
			printf("x = b\n");
		} else
		{
			if(x==c)
			{
				printf("x = c\n");
			} else
			{
				if(x==d)
				{
					printf("x = d\n");
				}
			}
		}
	}
}