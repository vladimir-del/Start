//-------------------------------------------------
//Date: 29.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 6
// Programming exercise 15
//-------------------------------------------------



#include <stdio.h>


int main (void)

{
    float balance = 1000000; // balance chaj
    int i = 1;

    while (balance >0)

    {
        balance -= 60000;
        balance = balance + balance * 0.08;

        printf("Year = %-4d | Balance chake = %.2f\n", i, balance);
        i++;
    }



}