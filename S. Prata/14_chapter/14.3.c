/*-------------------------------------------------
//Date: 04.12.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 14
//Programming exercise 3
//-------------------------------------------------
/* 
Text programmming exersice.
3. Revise the book-listing program in Listing 14.2 so that it prints the book descriptions in
the order entered, then alphabetized by title, and then in order of increased value.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * s_gets(char * st, int n);

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book {
char title[MAXTITL];
char author[MAXAUTL];
float value;
};

void alfabet(const struct book alfabet1[], int n);
void cost(const struct book cost[], int n);



int main(int argc, char **argv)
{
struct book library[MAXBKS]; /* array of book structures */
int count = 0;
int index;

printf("Please enter the book title.\n");
printf("Press [enter] at the start of a line to stop.\n");

while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
{
	printf("Now enter the author.\n");
	s_gets(library[count].author, MAXAUTL);
	
	printf("Now enter the value.\n");
	scanf("%f", &library[count++].value);
	
	while (getchar() != '\n')
		continue; /* clear input line */

	if (count < MAXBKS)
		printf("Enter the next title.\n");
}

if (count > 0)
{
	printf("Here is the list of your books:\n");
	
	for (index = 0; index < count; index++)
		printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);

	alfabet(library, count);

	cost(library, count);

}



else
	printf("No books? Too bad.\n");

return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);

	if (ret_val)
	{
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
		continue;
	}
	return ret_val;
}

void alfabet(const struct book alfabet1[], int n)
{

	struct book temp, alfabet[n];
	memcpy(alfabet, alfabet1, sizeof(struct book) * n); // create a copy of the array

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (alfabet[i].title[0] > alfabet[j].title[0]);
			{
				strcpy(temp.title, alfabet[i].title);
				strcpy(alfabet[i].title, alfabet[j].title);
				strcpy(alfabet[j].title, temp.title);
			}
		}
	}

	printf("Here is the list of your in alfabet order books:\n");
	
	for (int index = 0; index < n; index++)
		printf("%s by %s: $%.2f\n", alfabet[index].title, alfabet[index].author, alfabet[index].value);
}

void cost(const struct book cost[], int n)
{
	struct book temp, costtemp[n];

	memcpy(costtemp, cost, sizeof(struct book) * n);

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (costtemp[i].value > costtemp[j].value);
			{
				temp.value =  costtemp[i].value;
				costtemp[i].value = costtemp[j].value;
				costtemp[j].value = temp.value;
			}
		}
	}
	printf("Here is the list of your in cost order books:\n");
	
	for (int index = 0; index < n; index++)
		printf("%s by %s: $%.2f\n", costtemp[index].title, costtemp[index].author, costtemp[index].value);
}