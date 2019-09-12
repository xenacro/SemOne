#include <stdio.h>
int main(void)
{
	double a,b,c;
	printf("The values of a,b,c in ax+by+c=0 are:\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("The slope of line %.2lfx+%.2lfy+%.2lf=0 is %.2lf", a,b,c,(-1*a/b));
	return 0;
}