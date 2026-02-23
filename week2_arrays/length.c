#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int get_length(char s[]);

int main(void) 
{
    char name[100];
    printf("Name: \n");
    scanf("%99s", name);

    int length = get_length(name);    
    printf("%i\n", length);
}

int get_length(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}