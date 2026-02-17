#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int n;
    printf("How many scores?");
    scanf("%i", &n);

    int scores[3];

    for (int i = 0; i < n; i++)
    {
        printf("Score %i: ", i + 1);
        scanf("%i", &scores[i]);
    }

    printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}