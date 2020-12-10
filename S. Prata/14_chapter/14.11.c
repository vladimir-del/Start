/*-------------------------------------------------
//Date: 10.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 14
//Programming exercise 11
//-------------------------------------------------
/* 
Text programmming exersice.
11. Write a function called transform() that takes four arguments: the name of a source
array containing type double data, the name of a target array of type double , an int
representing the number of array elements, and the name of a function (or, equivalently,
a pointer to a function). The transform() function should apply the indicated function
to each element in the source array, placing the return value in the target array. For
example, the call

transform(source, target, 100, sin);

would set target[0] to sin(source[0]) , and so on, for 100 elements. Test the function
in a program that calls transform() four times, using two functions from the math.h
library and two suitable functions of your own devising as arguments to successive calls
of the transform() function.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void transform (double *source, double *target, int n, double (*fp)(double));

int main(void)
{
    double source[2] = {0.1, 0.2};
    double target[2] = {0};
    printf("%.2f\n", target[0]);
    transform(source, target, 2, sin);

    printf("%.2f\n", target[0]);
    return 0;
}

void transform (double *source, double *target, int n, double (*fp)(double))
{
    target[0] =  (*fp)(source[0]);
    return;

}