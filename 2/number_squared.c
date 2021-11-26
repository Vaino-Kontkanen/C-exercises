/*Write a program that prompts the user for an integer, 
calculates the square and prints the result on the screen 
(also print out a newline character \n after the result). 
After printing, the program closes itself. */
#include<stdio.h>
int main()
{
    float number, square;
    printf("Enter an integer: ");
    scanf("%f", &number);
    square = number * number;
    printf("The square of the number you entered is %.0f", square);
    return 0;
}