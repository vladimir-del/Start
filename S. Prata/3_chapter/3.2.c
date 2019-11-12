//-------------------------------------------------
//Date: 24.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 2
//-------------------------------------------------


#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    
    printf("Input your name\n");
    
    scanf("%s", name);
    printf("\"%s\"\n", name); //output"name"
    printf("\"%20s\"\n", name); //width 20 symbols
    printf("\"%-20s\"\n", name); //width 20 symbols. Align left
    printf("\"%*s\"\n", (int)strlen(name) + 3, name); // width strlen(name) + 3. 

    return 0;
}