//-------------------------------------------------
//Date: 14.01.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 10
// Programming exercise 2
//-------------------------------------------------

/* 
Text programmming exersice.

Write a program that initializes an array-of- double and then copies the contents of the
array into three other arrays. (All four arrays should be declared in the main program.) To
make the first copy, use a function with array notation. To make the second copy, use a
function with pointer notation and pointer incrementing. Have the first two functions
take as arguments the name of the target array, the name of the source array, and the
number of elements to be copied. Have the third function take as arguments the name
of the target, the name of the source, and a pointer to the element following the last
element of the source. That is, the function calls would look like this, given the following
declarations:
double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
double target1[5];
double target2[5];
double target3[5];
copy_arr(target1, source, 5);
copy_ptr(target2, source, 5);
copy_ptrs(target3, source, source + 5);
*/

#include <stdio.h>

#define NUM_ARR 5

void copy_arr(double ArrTo[NUM_ARR], double ArrFrom[NUM_ARR], int num);
void copy_ptr(double *ArrTo, double *ArrFrom, int num);
void copy_ptrs(double *ArrTo, double *ArrFrom, double *num);


void main(void)

{

double source[NUM_ARR] = {1.1, 2.2, 3.3, 4.4, 5.5};
double target1[NUM_ARR];
double target2[NUM_ARR];
double target3[NUM_ARR];

for (int i = 0;  i < NUM_ARR; i++)
    printf("source arr[%d] = %.2lf\t", i, source[i]);
putchar('\n');

copy_arr(target1, source, NUM_ARR);
copy_ptr(target2, source, NUM_ARR);
copy_ptrs(target3, source, source + 3);
return;
}




//---------------------------------------------------
// The function of copying data using a arr. 
// ArrTo[NUM_ARR] - target arrey
// ArrFrom[NUM_ARR] - source arrey
//---------------------------------------------------
void copy_arr(double ArrTo[NUM_ARR], double ArrFrom[NUM_ARR], int num)
{
    putchar('\n');
    printf("--------------------------\n");
    printf("Using arr\n");
    for (int i = 0; i < NUM_ARR; i++)
    {
        double temp = ArrFrom[i];
        ArrTo[i] = temp;
        printf("target arr[%d] = %.2lf\t", i, ArrTo[i]);
    }
    putchar('\n');
}

//---------------------------------------------------
// The function of copying data using a pointer. 
// **ArrTo - pointer to target arrey
// **ArrFrom - pointer to source arrey
//---------------------------------------------------
void copy_ptr(double *ArrTo, double *ArrFrom, int num)
{
    putchar('\n');
    printf("--------------------------\n");
    printf("Using ptr\n");
    for (int i = 0; i < NUM_ARR; i++)
    {
        *(ArrTo + i) = *(ArrFrom + i);
        printf("target arr[%d] = %.2lf\t", i, *(ArrTo + i));
    }
}


void copy_ptrs(double *ArrTo, double *ArrFrom, double *num)
{
    putchar('\n');
    printf("--------------------------\n");
    printf("Third fuction\n");
    printf("%.2lf\n", *num);
}

