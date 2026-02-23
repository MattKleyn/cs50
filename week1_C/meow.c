#include <stdio.h>

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}

int main(void)
{ 
    meow(3);   
}