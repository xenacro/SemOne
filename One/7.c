#include <stdio.h>
int main(void)
{
	int a;
	printf("The number for operation:\n");
	scanf("%d",&a);
	printf("After operation:%d\n",(a%10)+(a%100)/10 );
	return 0;
}