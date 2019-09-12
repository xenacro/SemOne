#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c;
	printf("The values of a, b, c in The equation x^2+y^2+ax+by+c=0 are:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("The centre of this circle is (%.2lf, %.2lf) and the radius is %.2lf.",-0.5*a, -0.5*b, sqrt((0.25*a*a)+(0.25*b*b)-c));
	return 0;
}