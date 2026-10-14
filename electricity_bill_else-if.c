#include<stdio.h>
void main()
{
	float units,bill=0,surcharge=0,total=0;
	printf("\nEnter the no. of units consumed:");
	scanf("%f",&units);
	if(units<=50)
	{
		bill=units*0.50;
	}
	else if(units<=150)
	{
		bill=((50*0.5)+((units-50)*0.75));
	}
	else if(units<=250)
	{
		bill=((50*0.5)+(100*0.75)+((units-150)*1.20));
	}
	else
	{
		bill=((50*0.5)+(100*0.75)+(100*1.20)+((units-250)*1.5));
	}
	surcharge=bill*0.20;
	total=bill+surcharge;
	printf("\n Electricity Bill=Rs%2f",bill);
	printf("\n Surcharge 20percentage=Rs%2f",surcharge);
	printf("\nTotal Bill=Rs%2f",total);
}