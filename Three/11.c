#include <stdio.h>
int main (void)
{
	int a,b,c;
	printf("Entre values of a, b, c:\n");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b && b>c) || (c>b && b>a))
	{
		printf("%d",b);
	} else
	{
		if((a>c && c>b) || (b>c && c>a))
		{
			printf("%d",c);
		} else
		{
			printf("%d",a);
		}
	}
	return 0;
}