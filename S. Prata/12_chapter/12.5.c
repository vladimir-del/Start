//-------------------------------------------------
//Date: 30.10.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 12
// Programming exercise 4
//-------------------------------------------------

/* 
Text programmming exersice.
5. Write a program that generates a list of 100 random numbers in the range 1–10
in sorted decreasing order. (You can adapt the sorting algorithm from Chapter 11 ,
“Character Strings and String Functions,” to type int. In this case, just sort the numbers
themselves.) 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 100

int main (int argc, char *argv[])
{
	int arr[NUM]; // init array for numbers
	srand(time(NULL)); // set star value ti function rand
	
	// creating an array
	for (int i = 0; i < NUM; i++)
	{
		*(arr+i) = rand();
	}
	
	//printing the original array
	puts("Printing the original array:");
	for (int i = 0; i < NUM; i++)
	{
		if (i % 5 == 0)
			printf("\n");
		printf("%-10d ", *(arr + i));
		
	}
	
	//sorting an array  
	
	for (int i = 0; i < NUM; i++)
	{
		for (int k = i + 1; k < NUM; k++)
		{
			if (*(arr + i) > *(arr + k))
			{
				int temp = *(arr + i);
				*(arr + i) = *(arr + k);
				*(arr + k) = temp;
			}
		}
	}
	
	//print results
	puts("\n\nPrint results:");
	for (int i = 0; i < NUM; i++)
	{
		if (i % 5 == 0)
			printf("\n");
		printf("%-10d ", *(arr + i));
		
	}
	
	printf("\nProgram execution time by the function clock() = %ld", clock());
	return 0;
}