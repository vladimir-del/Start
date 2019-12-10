//-------------------------------------------------
//Date: 09.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 10
//-------------------------------------------------


#include <stdio.h>

#define INCOME1 14873
#define INCOME2 17850
#define INCOME3 23900
#define INCOME4 29750
#define STDTAX 0.15
#define ADDTAX 0.28


int main (void)

{
	float income, tax;
	int temp, temp1, taxvar, catvalue;
	
	printf("input your early income = ");

	
	while(scanf("%f", &income) == 1)
	{
		printf("Choise your tax variant = ");
		
		while(scanf("%d", &taxvar) == 1)
		{
			if (income <= 0)
		{
			printf ("Input positive value\n");
			continue;
		}
		
		if (taxvar < 1 || taxvar > 4)
		{
			printf("You choise wrong taxvar");
			continue;
		}
		
		switch(taxvar)
		{
			case 1: catvalue = INCOME1;
			break;
			case 2: catvalue = INCOME2;
			break;
			case 3: catvalue = INCOME3;
			break;
			case 4: catvalue = INCOME4;
			break;
		}
		
		if (income < catvalue)
		{
			tax = STDTAX * income;
			printf("%.1f your tax\n", tax);
		}else 
		{
			tax  = (STDTAX * catvalue) + (ADDTAX * (income - catvalue));
			printf("%.1f your tax\n", tax);
		}
		break;
		}
		
		printf("input your early income = ");
		continue;
	}
}