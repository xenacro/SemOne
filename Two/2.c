#include <stdio.h>
#include <math.h>
int main (void)
{
	double a,b,c,d,dist;
	printf("The position as convention are:\n");
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	dist=sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
	printf("The distance between them is: %.2lf",dist );
	return 0;
}