#include <stdio.h>
void main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<15;j++)
		{
			if(i%2==0)
			{
				if(i>1 && j<i)
					printf("*");
				else if(j<15)
				{
						if(j%2==0&&j!=i)
							printf("*");
						else
							printf("0");
				}
			}
			else if(j<i-1)
				printf("0");
			else if(j<15)
			{
				 if(j%2==0&& j!=i-1)
					printf("*");
		         else
		       		printf("0");
		     }
		}
		printf("\n");
	}
}
}