#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c,d,r1,r2,i1,i2;
	printf("The constants in equation ax^2+bx+c=0\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d)
	{
		if(d>0)
		{
			r1=((-1*b+sqrt(d))/(2*a));
			r2=((-1*b-sqrt(d))/(2*a));
			printf("The roots are %.2lf and %.2lf",r1,r2);
		} else
		{
			r1=(-1*b/(2*a));
			i1=(sqrt(-1*d)/(2*a));
			i2=-1*i1;
			printf(" The roots are unreal with real part = %.2lf and imaginary parts = %.2lf and %.2lf",r1,i1,i2);
		}
	} else
	{
		r1=-1*b/(2*a);
		printf("There is only one root with value of %.2lf",r1);
	}
	return 0;
}