#include <stdio.h>
#include <string.h>

typedef struct
{
    char *name;
    char *number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "Billy";
    people[0].number = "078-543-2317"; 
    people[1].name = "Mandy";
    people[1].number = "072-555-8734";
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Mandy") == 0)
        {
            printf("%s", people[i].number);
            return 0;
        }
    }
    printf("NOt Found.\n");
    return 1;
}