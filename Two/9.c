#include <stdio.h>
#include <math.h>
int main (void)
{
	double a,b,c,d,e,f,g,h,R,r,diss,area;
	printf("The values of a, b, c, d, e, f, g, h of ax+by+cz+d=0 and x^2+y^2+z^2+ex+fy+gz+h=0:\n");
	scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f,&g,&h);
	R=sqrt((0.25*e*e)+(0.25*f*f)+(0.25*g*g)-h);
	diss=(-0.5*(a*e+b*f+c*g)+d)/sqrt(a*a+b*b+c*c);
	r=sqrt(R*R-diss*diss);
	area=3.14*r*r;
	printf("The area is : %.2lf",area);
	return 0;
}