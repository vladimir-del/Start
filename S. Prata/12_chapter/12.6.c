//-------------------------------------------------
//Date: 31.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 6
//-------------------------------------------------

/* 
Text programmming exersice.
6. Write a program that generates 1,000 random numbers in the range 1–10. Don’t save or
print the numbers, but do print how many times each number was produced. Have the
program do this for 10 different seed values. Do the numbers appear in equal amounts?
You can use the functions from this chapter or the ANSI C rand() and srand()
functions, which follow the same format that our functions do. This is one way to
examine the randomness of a particular random-number generator.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define WIDTH 1000



int main (void)
{
    
    int i, j;
    int arr[10][WIDTH];

    for (i = 0; i < 10; i++)
    {
        int count[11] = {0};
        sleep(1);
        srand(time(NULL));
        for (j = 0; j < WIDTH; j++)
        {
            
            *(*(arr + i) + j) = (rand() % 10) + 1;
            ++count[*(*(arr + i) + j)];
            
        }
        printf("string = %2d:  ", i +1);
        for (int j = 1; j < 11; ++j) 
            printf("%-*d ",4, *(count + j));
        puts("");

    }
    return 0;
}
