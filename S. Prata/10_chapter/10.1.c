//-------------------------------------------------
//Date: 30.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 1
//-------------------------------------------------

/* 
Text programmming exersice.

Modify the rain program in Listing 10.7 so that it does the calculations using pointers
instead of subscripts. (You still have to declare and initialize the array.)
*/

#include <stdio.h>
#define MONTHS 12 
#define YEARS 5


int main(void)

{

const float rain[YEARS][MONTHS] =
{
{4.3,4.2,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
};

float total, all;
int i, j;

for (i = 0; i < YEARS; i++)
{
    for (j = 0, total = 0; j < MONTHS; j++)
    total += (*rain + i)[j];
    printf("%5d %15.1f\n",2000 + i, total);
    all += total;
}

printf("\n middle %.1f inch.\n\n", all/YEARS);
printf(" yan  feb  mar  apr  may  jun  jul  aug  sep  okt  nov  dec\n");
for (i = 0; i < MONTHS; i++)

{
    for (j = 0, total = 0; j < YEARS; j++)
    total += (*rain + j)[i];
    printf(" %3.1f ", total / YEARS);
}
printf("\n");
printf("%.1f\n", *(*rain + 1));

return 0;
}