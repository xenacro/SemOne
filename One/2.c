#include <stdio.h>
int main(void)
{
	int x,y;
	printf("The two numbers for operation are:\n");
	scanf("%d %d", &x, &y);
	printf("After performing the operation the result is:%d",(x*x)+(y*y*y));
	return 0;
}