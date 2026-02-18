#include <stdio.h>
#include <string.h>

int main(void)
{
    char *names[] = {"Bill", "Charly", "Tom", "Fred", "George", "Betty", "Ron"};
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Hom") == 0)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
}