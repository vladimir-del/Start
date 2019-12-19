//-------------------------------------------------
//Date: 16.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 8
//Programming exercise 4
//-------------------------------------------------


#include <stdio.h>

#define  YES  1
#define  NO   0


int main(void)

{
    int c, inword;
	int letter = 0;
	int word = 0;
    inword = NO;
    while((c = getchar()) !='\n')  {
    
	if (c ==' ')
    {
	inword = NO;
	continue;
	}	
	else if (inword == NO)  
	{
		inword = YES;
		++word;
	}
	++letter;
}
printf("All words = %d, all letter = %d, middle letter in word  = %.2f", word, letter, (float)letter/(float)word);

}