#include <stdio.h>
int main (void)
{
	int i;
	for(i=10;i<100;i++)
		if(((i/10)%3)==1)
			printf("%d ",i);
	return 0;
}