#include<stdio.h>
void main()
{
	int a;
	printf(" Enter a value ");
	scanf("%d",&a);
	(a%2==0)?printf("\n%d is an even number",a):printf("\n%d is an odd number",a);
}