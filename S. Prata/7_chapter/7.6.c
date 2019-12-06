//-------------------------------------------------
//Date: 06.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 6
//-------------------------------------------------


#include <stdio.h>


int main(void)

{
	char ch;
	int i = 0;
	char tmp1;
	
	printf("Enter any symbols or '#' for exit\n");
	
	while((ch = getchar()) != '#')
	{
		if (ch == 'e')
		tmp1 = ch; 
		else if (ch == 'i' && tmp1 == 'e')
			i++;
	}
	
	printf("%d\n", i);
	
	return 0;
}
	