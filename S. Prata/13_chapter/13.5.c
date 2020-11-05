/*-------------------------------------------------
//Date: 05.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 5
//-------------------------------------------------
/* 
Text programmming exersice.
5. Modify the program in Listing 13.5 so that it uses a command-line interface instead of an
interactive interface.
*/

/* append.c -- appends files to a file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096
#define SLEN 81

void append(FILE *source, FILE *dest);
char * s_gets(char * st, int n);


int main(int argc, char ** argv)
{
FILE *fa, *fs; // fa for append file, fs for source file

int files = 0; // number of files appended

int ch;
        if (argc < 3)
        {
            printf("Usage: $%s [file destination], [file sourse 1], [file sourse 1], ...", argv[0]);
            exit(EXIT_FAILURE);
        }
        printf("%d", argc);

        if ((fa = fopen(argv[1], "a+")) == NULL)
        {
            fprintf(stderr, "Can't open %s\n", argv[1]);
            exit(EXIT_FAILURE);
        }
     
    
    while (argc > (files + 2))
        {
            if (strcmp(argv[1], argv[files + 2]) == 0)
                fputs("Can't append file to itself\n",stderr);
            else if ((fs = fopen(argv[files + 2], "r")) == NULL)
                fprintf(stderr, "Can't open %s\n", argv[files + 2]);
                
            else
            {
                append(fs, fa);
                if (ferror(fs) != 0)
                    fprintf(stderr,"Error in reading file %s.\n", argv[files + 2]);
                
                if (ferror(fa) != 0)
                    fprintf(stderr,"Error in writing file %s.\n", argv[1]);
            
                fclose(fs);
                
                printf("File %s appended.\n", argv[files + 2]);
            }
            files++;
        }
    
    printf("Done appending. %d files appended.\n", files);
    
    rewind(fa);
    
    printf("%s contents:\n", argv[files + 2]);
    
    while ((ch = getc(fa)) != EOF)
        putchar(ch);

    puts("Done displaying.");
    fclose(fa);
    return 0;
}

void append(FILE *source, FILE *dest)
{
    size_t bytes;
    char temp[BUFSIZE]; // allocate once
    
    while ((bytes = fread(temp,sizeof(char),BUFSIZE,source)) > 0)
        fwrite(temp, sizeof (char), bytes, dest);
}