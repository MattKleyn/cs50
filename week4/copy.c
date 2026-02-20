#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char s[100];
    printf("s: ");
    scanf("%99s", s);

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }
    
    strcpy(t, s);
    
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    } 
    
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
    return 0;
}