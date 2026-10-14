#include<stdio.h>
void main()
{
	int di;
	printf("\nEnter a digit:\n");
	scanf("%d",&di);
	switch(di)
	{
		case 0: printf("\n Zero");
		break;
		case 1: printf("\n one");
		break;
		case 2: printf("\n two");
		break;
		case 3: printf("\n three");
		break;
		case 4: printf("\n four");
		break;
		case 5: printf("\n five");
		break;
		case 6: printf("\n six");
		break;
		case 7: printf("\n seven");
		break;
		case 8: printf("\n eight");
		break;
		case 9: printf("\n nine");
		break;
		default : printf("\n error");
	}	
}