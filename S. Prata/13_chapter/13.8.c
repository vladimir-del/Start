/*-------------------------------------------------
//Date: 07.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 8
//-------------------------------------------------
/* 
Text programmming exersice.
8. Write a program that takes as command-line arguments a character and zero or more
filenames. If no arguments follow the character, have the program read the standard
input. Otherwise, have it open each file in turn and report how many times the character
appears in each file. The filename and the character itself should be reported along with
the count. Include error-checking to see whether the number of arguments is correct and
whether the files can be opened. If a file can’t be opened, have the program report that
fact and go on to the next file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countchar();

int main(int argc, char *argv[])
{
    FILE *fa;

    char ch;
    int count = 0;

    if (argc == 1)
    {
        printf("Usage: $%s [file destination], [file sourse 1], [file sourse 1], ...\n", argv[0]);
        exit(EXIT_FAILURE);
    }
        else if (argc == 2)
            fa = stdout;

//printf("%c", argv[1][0]);
//printf("%d", argc);
    for (int i = 0; i < argc - 2; i++)
    {
        //printf("%d", i);
        
        if ((fa = fopen(argv[2 + i], "r")) == NULL)
        {
            fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[2 + i]);
            exit(EXIT_FAILURE);
        }
        
        while ((ch = getc(fa)) != EOF)
        {
            if (ch == argv[1][0])
                count++;
        }

    }
    
       printf("%d", count);
}