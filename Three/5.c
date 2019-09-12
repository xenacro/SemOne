#include <stdio.h>
int main(void)
{
	double a,b,c;
	printf("The constants for equation ax+by+c=0 are:\n");
	scanf("%lf %lf %lf",&a,&b, &c);
	printf("The slope is %.2lf",-1*a/b);
	return 0;
}