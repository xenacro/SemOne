#include <stdio.h>
int main (void)
{
	int a,b,c;
	printf("Entre 3 numbers out of which only two are same:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && a!=c)
	{
		printf("%d is diffrent",c);
	}else
	{
		if(a==c && a!=b)
		{
			printf("%d is diffrent",b);
		} else
		{
			if(b==c && a!=b)
			{
				printf("%d is diffrent",a);
			}
		}
	}
	return 0;
}