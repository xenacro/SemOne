#include <stdio.h>
int main (void)
{
	int a,b,c,p;
	printf("The constants of quadratic eqution:\n");
	scanf("%d %d %d",&a, &b, &c);
	printf("The euation f(x)=%dx^2 + %dx + %d\n",a, b, c);
	printf("The number as input of Function:\n");
	scanf("%d",&p);
	printf("Hence, f(%d)=%d\n",p,(a*p*p)+(b*p)+(c));
	return 0;
}