//-------------------------------------------------
//Date: 06.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 3
//-------------------------------------------------


#include <stdio.h>

int main(void)
{
int i = 0;
int k = 0;
int l = 0;
int num;
int tmp1 = 0;
float tmp2 = 0;

printf("Enter any symbol or '0' for exit \n");
scanf("%d", &num);
while (num != 0)
	{
		if (num % 2 == 0)
		{
			k++;
			tmp1 = tmp1 + (num / 2);
		}
		else
		{
			l++;
			tmp2 = tmp2 + ((float)num / 2.0);
			
		}
		i++;
		scanf("%d", &num);
	}
	
		printf("%d all nums, %d - even numbers, %d - odd numvers\n", i, k, l);
		printf("%3d average value of even numbers\n", tmp1);
		printf("%0.1f average value of odd numbers\n", tmp2);
	
	return 0;

}