//-------------------------------------------------
//Date: 16.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 8
//Programming exercise 3
//-------------------------------------------------


#include <stdio.h>
#include <ctype.h>


int main(void)

{
	int i, j, k;
	char ch;
	
	i = 0; j = 0; k = 0;
	
	while((ch = getchar()) != '^')
	{
		if (islower(ch))
		i++;
		else if (isupper(ch))
		j++;
		else 
		k++;
	}
	
	printf ("%d lower, %d upper, %d other", i, j, k);
	
	return 0;
}