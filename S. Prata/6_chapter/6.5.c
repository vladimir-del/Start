//-------------------------------------------------
//Date: 28.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 6
// Programming exercise 5
//-------------------------------------------------

#include <stdio.h>


int main(void)


{
    int up, down;

    printf("enter up and dawn number in format Num1, Num2\n");
    scanf("%d, %d", &up, &down);

    for (int i = up; i <= down ; i++)
    {
        int num2 = i * i;
        int num3 = i *i * i;
        printf("x=%-5d|x^2 = %-5d|x^3 = %-5d\n", i, num2, num3);
    }

    return 0;
}