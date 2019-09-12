#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c, s, area;
	printf("The sides of Triangle are:\n");
	scanf("%lf %lf %lf",&a ,&b, &c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of triangle is %.2lf",area);
	return 0;
}