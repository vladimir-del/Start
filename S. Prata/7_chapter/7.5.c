//-------------------------------------------------
//Date: 06.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 5
//-------------------------------------------------


#include <stdio.h>


int main(void)

{
	char ch;
	int i = 0;
	
	printf("Enter any symbols or '#' for exit\n");
	
	while((ch = getchar()) != '#')
	{
		switch(ch)
		{
			case '.': ch = '!';
			i++;
			break;
			
			case '!': printf("!");
			ch = '!';
			i++;
			break;
		}
		printf("%c", ch);
	}
	printf("%d - all changes", i);
	return 0;
}
	