//-------------------------------------------------
//Date: 27.10.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 3
// Programming exercise 5
//-------------------------------------------------

#include <stdio.h>
#include <string.h>

int main ()
{

char name[40];
char surname[40];
printf("Enter your name\n");
scanf("%s", name);
printf("Enter your surname\n");
scanf("%s", surname);

printf("\n%*s %*s\n", (int)strlen(name), name, (int)strlen(surname), surname);
printf("%*d %*d\n", (int)strlen(name), (int)strlen(name), (int)strlen(surname), (int)strlen(surname));

printf("------------------------\n");

printf("%*s %*s\n", (int)strlen(name), name, (int)strlen(surname), surname);
printf("%-*d %-*d\n", (int)strlen(name), (int)strlen(name), (int)strlen(surname), (int)strlen(surname));


return 0;
}