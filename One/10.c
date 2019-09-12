#include <stdio.h>
int main(void)
{
	int a;
	printf("The number for operation:\n");
	scanf("%d",&a);
	printf("Aftter operation:%d\n",(a/100)*100+(a%10)*10+((a%100)/10) );
	return 0;
}