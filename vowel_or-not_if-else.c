#include<stdio.h>
void main()
{
	char ch;
	printf("\n Enter a characrer:");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("\n %c is an vowel",ch);
	}
	else
	{
		printf("\n %c is not an vowel",ch);
	}
}