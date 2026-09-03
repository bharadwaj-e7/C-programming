#include<stdio.h>
void main()
{
	int a=4,b,c=5,d;
	b=a<<1;
	printf("\na=%d,b=%d",a,b);
	d=c>>1;
	printf("\nc=%d,f=%d",c,d);
	printf("\n sizeof a=%d",sizeof(a));
}