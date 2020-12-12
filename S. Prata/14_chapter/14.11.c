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
#include <stdlib.h>

#define N 10

void transform (double *source, double *target, int n, double (*fp)(double));
void printarr(double *target, int n);
double sum(double);
double del(double);

char showmenu(void);

int main(void)
{

    double (* fp[4])(double) = {sin, cos, sum, del};
    double source[N] = {90, 0.2, 3, 2.3, 15, 5, 0.2, 0.6, 0.5, 1.1};
    double target[N] = {0};
    char choice;

    while((choice = showmenu()) != 'n')
    {
        switch (choice)
        {
        case 'a': 
        system("clear");
        printf("Target arrau after sin\n");
        transform(source, target, N, fp[0]);
        printarr(target, N);
        printf("Press Enter to continue");
        getchar(); getchar();
            break;
        
        case 'b': 
        system("clear");
        printf("Target arrau after cos\n");
        transform(source, target, N, fp[1]);
        printarr(target, N);
        printf("Press Enter to continue");
        getchar(); getchar();
            break;
        
        case 'c': 
        system("clear");
        printf("Target arrau after sum\n");
        transform(source, target, N, fp[2]);
        printarr(target, N);
        printf("Press Enter to continue");
        getchar(); getchar();
            break;
        
        case 'd': 
        system("clear");
        printf("Target arrau after del\n");
        transform(source, target, N, fp[3]);
        printarr(target, N);
        printf("Press Enter to continue");
        getchar(); getchar();
            break;
        
        default:
            break;
        }

        system("clear");

    }

    transform(source, target, N, sin);

    printarr(target, N);
    return 0;
}

void transform (double *source, double *target, int n, double (*fp)(double))
{

    for (int i = 0; i < n; i++)
         *(target + i) =  (*fp)(*(source + i));
}

void printarr(double *target, int n)
{
    for (int i = 0; i < n; i++)
    printf("target[%d] = %.1f \n", i, *(target + i));
}

char showmenu(void)
{
    char answer;
    puts("Choice func");
    printf("(a) sin\n(b) cos\n(c) sum\n(d) del\n");
    answer = getchar();
    while (strchr("abcd", answer) == NULL)
    {
        printf("Input only a, b, c, d\n");
        answer = getchar();
    }
    return answer;
}

double sum(double n)
{
   return n += 2;
}

double del(double n)
{
    return n /= 2;
}