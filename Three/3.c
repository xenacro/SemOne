#include <stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		printf("%d and %d are the numbers.\n",a, b);
	} else 
	{
		printf("%d and %d are the numbers.\n",b, a);
	}
}