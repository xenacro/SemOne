#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a/b)
	{
		if(a/c)
		{
			printf("%d is greatest",a);
		} else
		{
			printf("%d is greatest",c);
		}
	} else
	{
		if(b/c)
		{
			printf("%d is greatest\n",b );
		} else
		{
			printf("%d is greatest\n",c );
		}
	}
	return 0;
}