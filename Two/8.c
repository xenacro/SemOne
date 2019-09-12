#include <stdio.h>
#include <math.h>
int main(void)
{
	double a, b, c, cosA, A;
	printf("The sides of the triangle are: \n");
	scanf("%lf %lf %lf",&a,&b,&c);
	cosA=((b*b)+(c*c)-(a*a))/(2*b*c);
	A=acos(cosA)*180/3.14;
	printf("The angle A of the triangle is: %.2lf",A);
	return 0;
}