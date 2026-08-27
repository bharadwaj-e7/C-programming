#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("\n Enter four values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	((a>=b)&&(a>=c)&&(a>=d))?printf("\n%d is largest",a):(((b>=c)&&(b>=d))?printf("\n%d is largest",b):((c>=d)?printf("\n%d is largest",c):printf("\n%d is largest",d)));
}