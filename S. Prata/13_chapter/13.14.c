/*-------------------------------------------------
//Date: 11.11.2020
//Autor: Vlaimir Draga
//S. Prata. Chapter 13
//Programming exercise 14
//-------------------------------------------------
/* 
Text programmming exersice.
14. Digital images, particularly those radioed back from spacecraft, may have glitches. Add
a de-glitching function to programming exercise 12. It should compare each value to its
immediate neighbors to the left and right, above and below. If the value differs by more
than 1 from each of its neighbors, replace the value with the average of the neighboring
values. You should round the average to the nearest integer value. Note that the points
along the boundaries have fewer than four neighbors, so they require special handling.  
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ROW 20
#define COLS 30

void deglitch(int [ROW][COLS]);

int main(int argc, char **argv)
{
	FILE *fa;
	int array[20][30];
	char ch;
	char s[20][31] = {0};
	const char symbols[10] = {' ', '.', '`', ':', '~', '*', '=', '@' , '%', '#'};
	
	
	//open file
	if ((fa = fopen("s.txt", "r")) == NULL)
	{
		fprintf(stdout,"Can't open \"%s\" file.\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	//save char to int
		 for (int i = 0; i < 20; i++)
		 {
			 for (int j = 0; j < 30; j++)
			 {
				ch = getc(fa);
				while (ch == ' ' || ch == '\n')
				{
					ch = getc(fa);
					continue;
				}	
				*(*(array + i) + j) = ch & 0x0F;
			 }
		 }
	deglitch(array);
	//change int to symbol and creating strings
	for (int i = 0; i < 20; i++)
		 {
			 for (int j = 0; j < 30; j++)
				*(*(s + i) + j) = *(symbols + *(*(array + i) + j));
		 }
	
	//print strings
	for (int i = 0; i < 20; i++)
	{
		printf("%s\n", s[i]);
	}
	
	return 0;
}

void deglitch(int T[ROW][COLS])
{
	char copy_T[ROW][COLS];
	float average_neighbors;
	int nb_neighbors;
	for (int c = 0; c < COLS; ++c) {
		for (int r = 0; r < ROW; ++r)
			copy_T[r][c] = T[r][c];
	}
	for (int c = 0; c < COLS; ++c) {
		for (int r = 0; r < ROW; ++r) {
			average_neighbors = 0;
			nb_neighbors = 0;
			if (r >= 1) {
				if (abs(copy_T[r-1][c] - copy_T[r][c]) <= 1)
					continue;
				average_neighbors += copy_T[r-1][c];
				++nb_neighbors;
			}
			if (r < ROW - 1) {
				if (abs(copy_T[r+1][c] - copy_T[r][c]) <= 1)
					continue;
				average_neighbors += copy_T[r+1][c];
				++nb_neighbors;
			}
			if (c >= 1) {
				if (abs(copy_T[r][c-1] - copy_T[r][c]) <= 1)
					continue;
				average_neighbors += copy_T[r][c-1];
				++nb_neighbors;
			}
			if (c < COLS - 1) {
				if (abs(copy_T[r][c+1] - copy_T[r][c]) <= 1)
					continue;
				average_neighbors += copy_T[r][c+1];
				++nb_neighbors;
			}
			average_neighbors /= nb_neighbors;
			T[r][c] = (int) (average_neighbors + 0.5); // round average
		}
	}
}