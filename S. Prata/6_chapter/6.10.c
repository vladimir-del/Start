//-------------------------------------------------
//Date: 29.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 6
// Programming exercise 10
//-------------------------------------------------

#include <stdio.h>

#define NUM 10

int main (void)
{
    int data[NUM];

    printf("enter 10 numbers:");

    for (int i = 0; i < NUM; i++)
    {
        scanf("%d", &data[i]);
    }
    
    for (int j = NUM-1; j >= 0; j--)
    {
        printf("%d ", data[j]);
    }

    return 0;

}