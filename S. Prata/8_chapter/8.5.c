//-------------------------------------------------
//Date: 17.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 8
//Programming exercise 5
//-------------------------------------------------


#include <stdio.h>

#define LOW 0
#define HI 100

int main(void)


{
	char ch;
	int low, middle, hi;
	printf("Guess a number from 0 to 100\n");
	printf("Press 'f' if you Find number\n");
	printf("Press 'y' if comparison state is true\n");
	printf("Press 'n' if comparison state is false\n");
	printf("Press 'r' for restart\n");
	low = LOW;
	hi = HI;
	
	while (low < hi)
	{
		middle = (low + hi) / 2;
		printf("Are you guess number < %d?\n", middle);
		printf("low = %d", low);
		printf("hi = %d\n", hi);
		ch = getchar();
		while(ch == '\n')
		{ch = getchar();
		break;
		}
		if (ch == 'f')
		break;			
		else if (ch == 'y')
		{
			hi = middle;
		}
		else if (ch == 'n')
		{
			low = middle;
		}
		else if (ch == 'r')
		{
			low = LOW;
			hi = HI;
		}
	}
	
	printf("You number are %d\n", middle);
	


return 0;
}