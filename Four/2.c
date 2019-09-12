#include <stdio.h>
int main (void)
{
	int i;
	for(i=21;i<80;i++)
	{
		if(i<40)
		{
			printf("%d ",i);
		}else
		{ if(i>50 && i<80 && i%2==0)
			{
				printf("%d ",i);
			}
		}
	}
	return 0;
}