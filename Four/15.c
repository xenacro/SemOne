#include <stdio.h>
int main(void)
{
	for(int i=0;i<100;i++)
		if(((i/10)%2)==0 && i%2==0)
			printf("%d ",i);
		else if(((i/10)%2)==1 && i%2==1)
			printf("%d ",i);
	return 0;
}