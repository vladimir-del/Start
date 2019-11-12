//-------------------------------------------------
//Date: 07.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 4
// Programming exercise 2
//-------------------------------------------------

#include<stdio.h>

int main (void)
{
    int num, fin;
    printf("Enter number\n");
    scanf("%d", &num);
    fin = num + 11;
    while (num < fin)
    {
        printf("%d ", num);
        num++;
    }
    printf("\nEnd\n");
    return 0;

}