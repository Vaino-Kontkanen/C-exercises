/*Write a program that prompts the user for a word 
(max 15 lower-case letters) and calculates the number of 
vowels (a, e, i, o, u, y) in the word.*/
#include<stdio.h>
void main()
{
    char word[15];
    int i=0;
    int count=0;
    printf("The program calculates the number of vowels.\n");
    printf("Enter a word:");
    scanf("%s",&word[0]);
    while(word[count]!='\0')
    {
        if(word[count]=='a'||word[count]=='e'||word[count]=='i'||word[count]=='o'||word[count]=='u')
        {
            i++;
        }
        count++;
    }
    printf("\nThe word contains %d vowels.",i);
}