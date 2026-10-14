#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,d,r1,r2;
	printf("Enter three values:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
		r1=(-b+sqrt(d))/2.0*a;
		r2=(-b-sqrt(d))/2.0*a;
		printf("\n roots are r1=%f,r2=%f",r1,r2);
	}
	else
	{
		printf("\n roots are imaginary");
	}
}