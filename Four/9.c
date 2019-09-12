#include <stdio.h>
int main (void)
{
	int i,n;
	printf("Entre the limit:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if((i%10)%3==0) 
		{
			printf("%d ",i);
		}
	}
	return 0;
}