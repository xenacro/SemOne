#include <stdio.h>
int main(void)
{
	int n;
	printf("Entre the limit under 100:\n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
		if(((i%10)+(i/10))%7==0)
			printf("%d ",i);
	return 0;
}