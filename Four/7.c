#include <stdio.h>
int main (void)
{
	int i,n;
	printf("Entre the limit:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0 && i%3!=0 && i%5!=0) 
		{
			printf("%d ",i);
		}
	}
	return 0;
}