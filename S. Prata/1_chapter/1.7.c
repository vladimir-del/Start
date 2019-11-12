//Chapter 1. Exercize 1.7

#include <stdio.h>
void one_three();
void two();
void main (void)
{
    printf("Start now\n");
    one_three();
    printf("Right\n");

    return;

}

void one_three()
{
    printf("One\n");
    two();
    printf("Three\n");
}

void two()
{
    printf("Two\n");
}