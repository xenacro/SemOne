#include <stdio.h>
int main (void)
{
	int i,n;
	printf("Entre the limit:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<20 || i>90 || (i>50 && i<70))
		{
			printf("%d ",i);
		}
	}
	return 0;
}