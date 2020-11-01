//-------------------------------------------------
//Date: 31.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 7
//-------------------------------------------------

/* 
Text programmming exersice.
7. Write a program that behaves like the modification of Listing 12.13 , which we discussed
after showing the output of Listing 12.13 . That is, have the program produce output like
the following:
Enter the number of sets; enter q to stop : 18
How many sides and how many dice? 6 3
Here are 18 sets of 3 6-sided throws.
12 10 6 9 8 14 8 15 9 14 12 17 13 8 14
How many sets? Enter q to stop: q
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ctype.h>

int main (void)
{
int sets, side, dice, roll;   
printf("Enter the number of sets; enter q to stop :");
while (scanf("%d", &sets) == 1 && sets > 0) 
{
    printf("How many sides and how many dice?");
    if (scanf("%d%d", &side, &dice) == 1)
            exit(EXIT_FAILURE);
    printf("Here are %d sets of %d %d-sided throws\n", sets, dice, side);

    for (size_t i = 0; i < sets; i++)
    {
        int rez = 0;
        for (size_t j = 0; j < dice; j++)
            rez += (rand() % side) + 1;
        printf("%d ", rez);
    }

    printf("\nHow many sets? Enter q to stop:");
  
}
    return 0;
}