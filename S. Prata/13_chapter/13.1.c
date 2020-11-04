/*-------------------------------------------------
//Date: 04.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 1
//-------------------------------------------------

/* 
Text programmming exersice.
1. Modify Listing 13.1 so that it solicits the user to enter the filename 
and reads the user’s response instead of using command-line arguments.
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char ** argv)
{
    int ch; // place to store each character as read
    FILE *fp; // "file pointer"
    unsigned long count = 0;
    char *s;
if (argc != 1)
{
    printf("Usage: %s\n", argv[0]);
    exit(EXIT_FAILURE);
}
printf("Enter file name:");
scanf("%s", s);

if ((fp = fopen(s, "r")) == NULL)
{
    printf("Can't open \"%s\"\n", s);
    exit(EXIT_FAILURE);
}
while ((ch = getc(fp)) != EOF)
{
    putc(ch,stdout); // same as putchar(ch);
    count++;
}
fclose(fp);
    printf("File %s has %lu characters\n", argv[1], count);
return 0;
}