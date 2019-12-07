//-------------------------------------------------
//Date: 29.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 6
// Programming exercise 9
//-------------------------------------------------

#include <stdio.h>

int func(int arg1, int arg2);

int main(void)

{
    int num1, num2;
    printf("Input two numbers, down and up: ");
    scanf("%d %d", &num1, &num2);

    while (num2 > num1)
    {
        printf("Sum numbers from num1^2 = %d to num2^2 = %d | = %d\n", num1*num1, num2*num2, func(num1, num2));
        scanf("%d %d", &num1, &num2);
    }

    return 0;
}

int func(int arg1, int arg2)

{
    int arg = 0;
    for (int i = arg1; i <= arg2; i++)
    {
        
        arg += i * i; 
    }
    
return arg;
}