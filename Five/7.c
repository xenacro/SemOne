#include<stdio.h>

int main()
{
	int j,s=5,e=11;
	for(int i=0;i<17;i++)
		printf("0");
	for(int k=0;k<9;k++)
	{	
		printf("\n");
		if(k==1)
		{
				s=s-2;
				e=e+2;
		}
		else if(k==2 || k==3)
		{
			s=s-1;
			e=e+1;
		}
		else if(k==6 || k==7)
		{
			s=s+1;
			e=e-1;
		}
		else if(k==8)
		{
			s=s+2;
			e=e+2;
		}
		for(j=0;j<17;j++)
		{
			
			if((j>s && j<e))
				printf("*");
			else
				printf("0");
		}
	}
	printf("\n");
	for(j=0;j<17;j++)
		printf("0");
	return 0;

}