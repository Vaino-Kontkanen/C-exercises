/*Write a program that first asks the user whether 
they drink coffee or tea and then how many cups a day. 
Finally, the program prints a statement in accordance 
with the following instructions: 
Coffee 0 to 2 cups: "You don't drink a lot of coffee, do you?", 
coffee 3-20 cups: "You drink a lot of coffee!", 
Tea 0-2 cups: "You do not drink a lot of tea.", 
tea 3-20 cups: "You drink a lot of tea!", 
Otherwise "An error occurred in the program!" The number of cups 
shall be processed as an integer variable and the drink as a 
character variable (c/t). You do not need to account for upper case letters.*/
#include <stdio.h>
int main(void)
{
  int cups;
  char coffee;
  printf("Do you drink coffee or tea (c/t)?");
  scanf("%c",&coffee);
  printf("How many cups do you drink daily:");
  scanf("%d",&cups);
  if(cups >= 0 && cups <= 2)
  {
    if(coffee == 'c')
    {
      printf("You don't drink a lot of coffee, do you?\n");
    }
    else if(coffee == 't')
    {
      printf("You do not drink a lot of tea.\n");
    }
    else
    {
      printf("An error occurred in the program!\n");
    }
  }
  else if(cups >= 3 && cups <= 20)
  {
    if(coffee == 'c')
    {
      printf("You drink a lot of coffee!\n");
    }
    else if(coffee == 't')
    {
      printf("You drink a lot of tea!\n");
    }
    else
    {
      printf("An error occurred in the program!\n");
    }
  }
  else
  {
    printf("An error occurred in the program!\n");
  }
  return 0;
}