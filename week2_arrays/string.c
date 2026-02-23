#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[100];
    printf("Input:  ");
    scanf("%99s", input);
    printf("Output: ");
    
    // int length = strlen(input);
    //can define multiple variables in for loop as such
    for (int i = 0, n = strlen(input); i < n; i++)
    {
        printf("%c", input[i]);
    }
    printf("\n");
}