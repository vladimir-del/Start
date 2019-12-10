//-------------------------------------------------
//Date: 09.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 9
//-------------------------------------------------


#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

bool isprime(uint8_t n);

uint8_t main (void)

{
	uint8_t num;
	
	printf("Input unsigned integer number\n");
	scanf("%d", &num);
	for (uint8_t i = 2; i <= num; i++)
	{
		if (isprime(i))
			printf("%d ", i);
	}
	
	return 0;
}

bool isprime(uint8_t n)
{
	if (n > 1)
	{
		for(uint8_t i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return false;
			}
			
		}
		return true;
	} else
	{
		return false;
	}
}