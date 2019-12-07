//-------------------------------------------------
//Date: 28.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 6
// Programming exercise 2
//-------------------------------------------------

#include <stdio.h>

#define STR 5

int main (void)

{

int k = 2;
    for (int i = 0; i < STR; i++)
    {

        for (int  j = 1 ; j < k; j++)
        {
            printf("$");
        }
        k++;
        printf("\n");
    }
    
return 0;
}