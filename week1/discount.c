// #include <cs50.h>
//following to suppress Microsoft warnings
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
    //following line does not work without cs50 library
    //float regular = get_float("Regular: "); 

    // so replacing with pure C as follows
    float regular;
    printf("Regular: ");
    scanf("%f", &regular);

    int percent_off;
    printf("Discont: ");
    scanf("%i", &percent_off);

    float sale = discount(regular, percent_off);
    printf("Sale price: %.2f\n", sale);
}

float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}