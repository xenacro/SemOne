#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a*a==b*b+c*c)
	{
		printf("A angle is 90 degree.\n");
	}else
	{
		printf("Sorry!\n");
	}
	return 0;
}