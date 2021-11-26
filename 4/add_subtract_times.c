/*Write a program that prompts the user for two integers 
and prints the sum, difference and product of the numbers 
on the screen.*/
#include <stdio.h>
int main ()
{
    float num1, num2, added, subtracted, timezed;
	printf("Enter the first number:");
	scanf("%f", &num1);
	printf("Enter the second number:");
	scanf("%f", &num2);
	added = num1 + num2;
	subtracted = num1 - num2;
	timezed = num1 * num2;
	printf("\n %.0f+%.0f=%.0f \n %.0f-%.0f=%.0f \n %.0f*%.0f=%.0f", 
    num1, num2, added, num1, num2, subtracted, num1, num2, timezed);
	return 0;
}