#include<stdio.h>
void main()
{
	int n,i;
	long fact =1;
	printf("\n Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial =%ld",fact);
}