#include <stdio.h>
#include <math.h>
int main (void)
{
	double a,b,c,d,e,distance;
	printf("The point and the contstants of line in general form are:\n");
	scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);
	distance=((a*c)+(b*d)+e)/sqrt((c*c)+(d*d));
	if(distance>0)
	{
		printf("The distance of the point from the given line is: %.2lf",distance);
	} else
	{
		printf("The distance of the point from the given line is: %.2lf",-1*distance);
	}
	return 0;
}