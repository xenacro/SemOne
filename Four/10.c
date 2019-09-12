#include <stdio.h>
int main (void)
{
	int i,n;
	printf("Entre the limit:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if((i%10)>=5 && (i%10)<=8) 
		{
			printf("%d ",i);
		}
	}
	return 0;
}