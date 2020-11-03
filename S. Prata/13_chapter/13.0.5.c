//-------------------------------------------------
//Date: 03.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
// Review questions 5
//-------------------------------------------------

/* 
Text programmming exersice.
4. Write a program that takes two command-line arguments. The first is a character, and
the second is a filename. The program should print only those lines in the file containing
the given character. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF 256


int main(int argc, char ** argv)
{
    FILE *fa;
    char s[BUF];
    int count = 0;

    if (argc != 3)
    {
        printf("Usage:$%s [charcters] [FILE_NAME]\n", argv[0]);
		exit(EXIT_FAILURE);
    }

    if ((fa = fopen(argv[2],"r")) == NULL)
    {
        fprintf(stderr, "Cannot open file to read\n");
        exit(EXIT_FAILURE);
    }
    while((fgets(s, BUF, fa) != NULL))
    {
        if ((strchr(s, *argv[1]) != NULL))
                printf("%s\n",s);
    }
    fclose(fa);
    return 0; 

}