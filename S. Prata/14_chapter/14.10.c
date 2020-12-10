/*-------------------------------------------------
//Date: 10.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 14
//Programming exercise 10
//-------------------------------------------------
/* 
Text programmming exersice.
10. Write a program that implements a menu by using an array of pointers to functions. For
instance, choosing a from the menu would activate the function pointed to by the first
element of the array.
*/

#include <stdio.h>
#include <string.h>

void func1(void);
void func2(void);
void func3(void);
char showmenu(void);

int main(void)
{
    void (* fp[3])(void) = {func1, func2, func3};
    char choice;

    while ((choice = showmenu()) != '\n')
    {
        switch (choice)
        {
        case 'a':
            fp[0]();
            break;

        case 'b':
            fp[1]();
            break;
        
        case 'c':
            fp[2]();
            break;
        
        default:
            break;
        }
    }       

    return 0;
}

void func1(void)
{
    printf("func1\n");
}
void func2(void)
{
    printf("func2\n");
}
void func3(void)
{
    printf("func3\n");
}


char showmenu(void)
{
    char answer;
    puts("Enter menu choice:");
    puts("a) func1");
    puts("b) func2");
    puts("c) func3");
    answer = getc(stdin);
        while(strchr("abc", answer) == NULL)
        {
            printf("Input only a,b or c");
            answer = getchar();
        }

    return answer;
}