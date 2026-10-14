#include<stdio.h>
void main()
{
	int a,b;
	char op;
	printf("\n Enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("\n Enter operater:");
	scanf(" %c",&op);
	switch(op)
	{
		case'+':printf("\nResult=%d",a+b);break;
		case'-':printf("\nResult=%d",a-b);break;
		case'*':printf("\nResult=%d",a*b);break;
		case'%':printf("\nResult=%d",a%b);break;
		case'/':printf("\nResult=%d",a/b);break;
		default:printf("\n %c is an invalid operator",op);
	}
}