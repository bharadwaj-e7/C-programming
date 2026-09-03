#include<stdio.h>
void main()
{
	int a,b;
	printf("\nEnter two values:");
	scanf("%d%d",&a,&b);
	printf("\n Before swapping a=%d,b=%d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\n After swapping a=%d,b=%d",a,b);
}