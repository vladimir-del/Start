//-------------------------------------------------
//Date: 28.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 4
//-------------------------------------------------

#include <stdio.h>



int main(void)
{

    char firstLetter;
    printf("Enter first letter A - Z or q for exit -->");
    scanf("%c", &firstLetter);

    while(firstLetter == 'q')
    {
        printf("End programm\n");
        return 1;
    }
    
    for (int i = 0; i < (firstLetter - 'A') + 1; i++)
    {
        int g = 0;
        int j = i; 


        //первая половина строкию пробелы.
        for (int k = (firstLetter - 'A') - 1; k >= 0; k--)
        {
            if (k < i)
            {
                printf("%c", 'A' + g);
                g++;
            }
            else
            printf(".");
        }

        //середина
        printf("%c", 'A' + i);

        //второая половина строки
        for (int m = 0; m < (firstLetter - 'A'); m++)
        {
            if (m < i)
            {
                printf("%c",'A' + j - 1);
                j--;
            }
            else
            printf(".");
        }
        
        
        printf("\n");
    }
    

    return 0;

}