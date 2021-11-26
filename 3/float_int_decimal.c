/*Write a program that first asks the user for an integer and after that, 
a floating-point number. Finally, the program prints both numbers on the 
screen. The floating-point number shall be printed with two decimal places 
of precision.*/
#include<stdio.h>
int main()
{
    float number, decimal;
    printf("Enter an integer: ");
    scanf("%f", &number);
	printf("\n Enter a decimal number:");
	scanf("%f", &decimal);
    printf("You entered the integer: %.0f \nYou entered the decimal number, rounded to two decimal places: %.2f", number, decimal);
    return 0;
}