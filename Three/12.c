#include <stdio.h>
#include <math.h>
int main(void)
{
	double p,q,r,a,b,c,l,A;
	printf("The cordinates of the centre of circle and its radius are:\n");
	scanf("%lf %lf %lf",&p,&q,&r);
	printf("The values of a,b,c in the equation ax+by+c=0:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	l=(a*p+b*q+c)/sqrt(a*a+b*b);
	if(l<=r)
	{
		A=l*sqrt(r*r-l*l);
		printf("The area is %.2lf\n",A);
	} else
	{
		printf("No intersection!\n");
	}
	return 0;
}