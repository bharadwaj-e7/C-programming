#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b)
	{
		if(a>=c)
	{
		printf("\nlarge=%d",a);
	}
	    else
	{
		printf("\nlarge=%d",c);
	}
	}
	else
	{
		if(b>=c)
		{
			printf("\nlarge=%d",b);
		}
		else
		{
			printf("\nlarge=%d",c);
		}
	}
}