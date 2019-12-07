//-------------------------------------------------
//Date: 28.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 6
// Programming exercise 6
//-------------------------------------------------

#include <stdio.h>
#include <string.h>

int main(void)

{   
    char str[256];
    printf("Input string\n");
    scanf("%s", str);

    int num = strlen(str);

    for (int i = num; i >= 0; i--)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}