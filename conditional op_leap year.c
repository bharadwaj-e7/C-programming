#include <stdio.h>
void main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Using the conditional (ternary) operator to check leap year conditions
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))?printf("%d is a leap year.\n", year):printf("%d is not a leap year.\n", year);
}
