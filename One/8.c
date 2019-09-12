#include <stdio.h>
int main(void)
{
	int a;
	printf("The number for operation:\n");
	scanf("%d",&a);
	if(a%10<5)
	{
	printf("After operation: %d\n",a+(a%10) );
	} else 
	{
		printf("Error");
	}
	return 0;
}