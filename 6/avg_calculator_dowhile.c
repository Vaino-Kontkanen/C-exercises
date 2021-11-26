/*Write a program that asks for the students' exam scores 
(using integers 4 to 10) and calculates the average. The program must 
accept scores until entry is terminated by a negative integer. 
Finally, the program prints out the number of scores and the calculated 
average with two decimal places of precision.*/
#include<stdio.h>
int main()
{
    int num_entered, count = 0,sum=0;
    float avg;
    printf("The program calculates the average of scores you enter.\n");
    printf("End with a negative integer.\n");
    do
    {
        printf("Enter score (4-10):");
        scanf("%d", &num_entered);
        if (num_entered >= 4 && num_entered <= 10)
        {
            count++;
            sum = sum + num_entered;
            avg =(float)sum/ count;
        }
        else if (num_entered <= 0)
        {
            printf("You entered %d scores.", count);
            printf("\nAverage score: %.2f\n", avg);
        }
    }while (num_entered >= 4 && num_entered <= 10);

    return 0;
}