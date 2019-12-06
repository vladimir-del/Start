//-------------------------------------------------
//Date: 06.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 4
//-------------------------------------------------


#include <stdio.h>

int main(void)

{
	char ch;
	int i = 0;
	
	printf("Enter any symbols or '#' for exit\n");
	
	while((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			i++;
		}
		else if (ch == '!')
		{
			printf("%c", ch);
			ch = '!';
			i++;
		}
		printf("%c", ch);
	}
	
	printf("%d - all changes", i);
	
	return 0;
}