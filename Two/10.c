#include <stdio.h>
#include <math.h>
int main(void)
{
	double h, k, r, s, c;
	printf("The values of h, k, r, s are:\n");
	scanf("%lf %lf %lf %lf",&h,&k,&r,&s);
	c=2*sqrt(r*r-(h-s)*(h-s));
	printf("The length of chord is: %.2lf.",c);
	return 0;
}