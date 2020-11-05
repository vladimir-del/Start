/*-------------------------------------------------
//Date: 05.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 6
//-------------------------------------------------
/* 
Text programmming exersice.
6. Programs using command-line arguments rely on the user’s memory of how to use them
correctly. Rewrite the program in Listing 13.2 so that, instead of using command-line
arguments, it prompts the user for the required information.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 81

int main(int argc, char *argv[])
{
    FILE *in, *out; // declare two FILE pointers
    int ch;
	char file_src[LEN];
    char name[LEN]; // storage for output filename
    int count = 0; // check for command-line arguments

	puts("Enter source file name");
	scanf("%s", file_src);
    if ((in = fopen(file_src, "r")) == NULL)
        {
            fprintf(stderr, "I couldn't open the file \"%s\"\n", file_src);
            exit(EXIT_FAILURE);
        }

    // set up output
	
    strncpy(name,file_src, LEN - 5); // copy filename
    name[LEN - 5] = '\0';
    strcat(name,".red");

    // append .red
    if ((out = fopen(name, "w")) == NULL)
        {
            // open file for writing
            fprintf(stderr,"Can't create output file.\n");
            exit(3);
        }

    // copy data
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out); // print every 3rd char

    // clean up
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr,"Error in closing files\n");
        
    return 0;
}
