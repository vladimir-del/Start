//-------------------------------------------------
//Date: 29.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 12
//-------------------------------------------------



#include <stdio.h>
#include <math.h>

#define NUM 8
int main (void)

{
    int data[NUM];
    
    for (int i = 0; i < NUM; i++)
    {
        data[i] = pow(2, i);
    }

    int j = NUM - 1;
    do
    {
        printf("%d\n", data[j]);
        j--;
    } while (j >= 0);
    
    return 0;
}
