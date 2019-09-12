#include <stdio.h>
int main(void)
{
	int length, breath;
	printf("Sides of the rectangle are:\n");
	scanf("%d %d",&length, &breath);
	printf("Area of the rectangle is:%d", length*breath);
	return 0;
}