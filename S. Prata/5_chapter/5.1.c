//-------------------------------------------------
//Date: 27.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 1
//-------------------------------------------------

#include <stdio.h>

#define SIZE 26

int main (void)

{
char data[SIZE];

for (int i = 0; i < SIZE; i++)
{
    data[i] = 'a' + i;

    printf("%c ", data [i]);
}


}