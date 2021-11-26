/*In this chapter, we create independent programs that are 
closely associated with each other. All the programs are components 
of a phone directory program. The intention is that you can continue 
your programming exercises by programming a phone directory. 
The exercises in this chapter can easily be converted into functions 
for a larger entity. 
The name and number data for the phone directory are contained 
in the file "phonedir.txt" which has the following format: 
4 
Firstname Lastname 050-3500980 
John Doe 041-3478924 
Brian Smith 040-3980982 
Brita Smith 05-4567393 */
#include <stdio.h>
#include <string.h>
int main() 
{
    FILE *f;
    char fname_write[20];
    char lname_write[20];
    char telephone_write[20];
    char fname_read[20];
    char lname_read[20];
    char telephone_read[20];
    struct person 
    {
        char fname[20];
        char lname[20];
        char telephone[20];
    } 
    person_list[50];
    int i, n;
    f = fopen("phonedir.txt", "r");
    printf("Enter first name:");
    scanf("%s", fname_write);
    printf("Enter last name:");
    scanf("%s", lname_write);
    printf("Enter telephone number:");
    scanf("%s", telephone_write);
    fscanf(f, "%d\n", &n);
    for(i = 0; i < n; i++) 
    {
        fscanf(f, "%s", fname_read);
        fscanf(f, "%s", lname_read);
        fscanf(f, "%s", telephone_read);
        strcpy(person_list[i].fname, fname_read);
        strcpy(person_list[i].lname, lname_read);
        strcpy(person_list[i].telephone, telephone_read);
    }
    strcpy(person_list[i].fname, fname_write);
    strcpy(person_list[i].lname, lname_write);
    strcpy(person_list[i].telephone, telephone_write);
    fclose(f);
    f = fopen("phonedir.txt", "w+");
    fprintf(f, "%d\n", ++n);
    for(i = 0; i < n; i++) 
    {
        fprintf(f, "%s ", person_list[i].fname);
        fprintf(f, "%s ", person_list[i].lname);
        fprintf(f, "%s\n", person_list[i].telephone);
    }
    fclose(f);
    printf("Successfully saved the data.\n");
    return 0;
}