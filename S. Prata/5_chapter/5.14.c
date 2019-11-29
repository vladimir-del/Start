//-------------------------------------------------
//Date: 29.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 14
//-------------------------------------------------



#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[256];

    printf("input string \n");
    scanf("%s", str);

    int num = strlen(str);

    for (int i = num; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");
return 0;

}