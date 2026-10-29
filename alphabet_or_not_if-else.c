#include<stdio.h>
void main()
{
        char ch;
        printf("Enter a Character:");
        scanf("%c",&ch);
   if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
   {
           printf("\n %c is an alphabet",ch);
   }
   else
   {
           printf("error");
   }
}