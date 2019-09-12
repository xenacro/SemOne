#include <stdio.h>
#include <math.h>
int main (void)
{
	double x1, y1, x2, y2,x3,y3,area;
	printf("The points in secquence are:")
;	scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
	area=(0.5)*((x1*y2)-(x2*y1)+(x2*y3)-(x3*y2)+(x3*y1)-(x1*y3));
	if(area>0)
	{
		printf("The area of triangle is :%.2lf",area);
	} else
	{
		printf("The area of Triangle is:%.2lf", -1*area);
	}
	return 0;
}