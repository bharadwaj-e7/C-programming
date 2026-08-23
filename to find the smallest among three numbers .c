#include<stdio.h>
void main()
{
	int a,b,c ;
	printf(" Enter three values \n ");
	scanf("%d%d%d", &a , &b , &c);
	 if (( a < b )&&( a < c ))
	printf(" \n a=%d is lesser than b=%d,c=%d " ,a,b,c);
	else if (( b < a )&&( b < c ))
	printf(" \n  b=%d is lesser than a=%d, c=%d ",b,a,c);
	else
	printf(" \n  c=%d is lesser than a=%d, b=%d ",c,a,b);
}