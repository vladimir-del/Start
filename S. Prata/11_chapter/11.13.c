//-------------------------------------------------
//Date: 21.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 11
// Programming exercise 13
//-------------------------------------------------

/* 
Text programmming exersice.
13. Write a program that echoes the command-line arguments in reverse word order. That
is, if the command-line arguments are see you later, the program should print later
you see. 
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{

	for (int i = argc - 1; i > 0; i--)
		printf("%s ", argv[i]);
	
	
}