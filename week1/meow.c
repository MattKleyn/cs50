#include <stdio.h>

void meow(void)
{
    printf("Meow Meow\n");
}

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}