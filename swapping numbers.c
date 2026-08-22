#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("Enter two values\n");
	scanf("%d%d",&a,&b);
	printf("\n before swaping a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\n after swapping a=%d,b=%d",a,b);
}