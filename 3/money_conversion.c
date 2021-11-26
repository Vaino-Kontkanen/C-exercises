/*Write a program that prompts the user for an amount in Finnish markka 
and converts it to euro. Finally, the program prints the amount on the 
screen in euro with two decimal places of precision. The euro conversion 
factor is 5.94573.*/
#include <stdio.h>
int main ()
{
	float fim, euro, conversion;
	printf("Enter an amount in FIM:");
	scanf("%f", &fim);
	conversion = 5.94573;
	euro = fim / conversion;
	printf("\n FIM converted to euro: %.2f", euro);
	return 0;
}