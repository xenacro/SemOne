#include <stdio.h>
int main()
{
	int a,b,x,y,sum=0;
	printf("The values of a,b:\n");
	scanf("%d %d",&a,&b);
	x=a;
	y=b;
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<1;j++)
		{
			printf("(%d)(%d)",x,y);
			a=x;
			b=y;
			for(int k=0;k<i;k++)
				{
				sum=a+b;
				printf("(%d)",sum);
				a=b;
				b=sum;
				}
		}
		printf("\n");
	}
}