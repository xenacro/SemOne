#include <stdio.h>
int main (void)
{
	double a,b,c,p,q,r,x1,y1;
	printf("The values of a, b, c, p, q, r in the equations ax+by+c=0 and px+qy+r=0:\n");
	scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&p,&q,&r);
	x1=((q*c/b)-r)/(p-((a*q)/b));
	y1=((-1*a*x1)-c)/b;
	printf("The point of intersection is: (%.2lf, %.2lf)",x1,y1);
	return 0;
}