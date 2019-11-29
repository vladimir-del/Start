//-------------------------------------------------
//Date: 28.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 3
//-------------------------------------------------

#include <stdio.h>
#define STR 6
#define START_VAL 'F'
int main(void)
{

    char val = START_VAL;
    int NumbersInSrt = 1; 

    for (int i = 0; i < STR; i++)
    {
        
        for (int j = 0; j < NumbersInSrt; j++)
        {
            printf("%c", val - j);
        }
        printf("\n");
        NumbersInSrt++;
        
    }

    return 0;    
}