//-------------------------------------------------
//Date: 13.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 8
//Programming exercise 2
//-------------------------------------------------

#include <stdio.h>

int main (void)

{
	int ch;

	while ((ch = getchar()) != '^')
	{
		if (ch >= 0 && ch <=31)
		{
			switch(ch)
			{
				case 0:
				printf( "\\0 ,%d", ch);
				break;
				case 7:
				printf( "\\a, %d", ch );
				break;
				case 8:
				printf( "\\b ,%d", ch );
				break;
				case 9:
				printf( "\\t ,%d", ch );
				break;
				case 10:
				printf( "\\n, %d", ch );
				break;
				case 11:
				printf( "\\v ,%d", ch );
				break;
				case 12:
				printf( "\\f ,%d", ch );
				break;
				case 13:
				printf( "\\r ,%d", ch);
				break;
				default:
				printf("%c ,%d", ch + 64, ch + 64);
			}
		
		}
		else
			printf("%c  %d ", ch, ch);
	}	

	
	return 0; 
}