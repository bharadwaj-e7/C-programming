#include<stdio.h>
void main()
{
	int n,rem,rev=0;
	printf("Enter a number:");
	scanf("%d",&n);
	for(n>0;n!=0;n=n/10)
	{
		rem =n%10;
		rev =rev*10+rem;
	}
	printf("Reverse=%d",rev);
}