#include<stdio.h>
void main()
{
	int physics,chemistry,biology,maths,computer,sum=0;
	float percentage;
	printf("\n Enter five subjects marks:\n");
	scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&maths,&computer);
	sum=physics+chemistry+biology+maths+computer;
	percentage=sum/5.0;
	if (percentage>=90)
	{
		printf("\n grade A");
	}
	else if (percentage>=80)
	{
		printf("\n grade B");
	}
	else if (percentage>=70)
	{
		printf("\n grade C");
	}
	else if (percentage>=60)
	{
		printf("\n grade D");
	}
	else if (percentage>=40)
	{
		printf("\n grade E");
	}
	else
	{
		printf("\n grade F");
	}
}