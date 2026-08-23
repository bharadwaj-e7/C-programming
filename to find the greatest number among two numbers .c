#include<stdio.h>
void main()
{
	int a,b ;
	printf(" Enter two values \n ");
	scanf("%d%d", &a , &b );
	 if (a > b)
	printf(" \n a=%d is greater than b=%d " , a);
	if ( b > a )
	printf(" \n b=%d is greater than a=%d ", b );
}