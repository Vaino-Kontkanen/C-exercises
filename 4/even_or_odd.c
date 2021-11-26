/*Write a program that prompts the user for an integer 
and checks whether it is even or odd. If the number 
is even, print the value 0, and if it is odd, print the value 1.*/
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("The number is 0");
    else
        printf("The number is 1");
    return 0;
}