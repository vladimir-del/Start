/*-------------------------------------------------
//Date: 03.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
// Review questions 7
//-------------------------------------------------

/* 
Text programmming exersice.
7. What is the difference between saving 8238201 by using
fprintf() and saving it by using fwrite() ?

What is the difference between saving the character S by 
using putc() and saving it by using fwrite() ?
*/

#include <stdio.h>
#include <stdlib.h>

#define NAME1 "fromFprintf"
#define NAME2 "fromFwrite"
#define NAME3 "fromPutc"
#define NAME4 "fromFwrite1"

int main(int argc, char ** argv)
{
    FILE *fa, *fb, *fc, *fd;
    long int num = 5623635;
    char ch ='S';

    fa = fopen(NAME1, "w");
    fb = fopen(NAME2, "w");
    fc = fopen(NAME3, "w");
    fd = fopen(NAME4, "w");

    fprintf(fa, "%ld", num);
    fwrite(&num, sizeof(long int), 1, fb);

    putc(ch, fc);
    fwrite(&ch, sizeof(char), 1, fd);


    return 0;


}