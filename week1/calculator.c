#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: \n");
    int y = get_int("y: \n");
    printf("%i \n", x + y);
}
