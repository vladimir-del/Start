//-------------------------------------------------
//Date: 06.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 8
//-------------------------------------------------


#include <stdio.h>
#define BASE1 8.75
#define BASE2 9.33
#define BASE3 10.00
#define BASE4 11.20
#define COUNT1 300
#define COUNT2 150
#define TAX1 0.15
#define TAX2 0.2 
#define TAX3 0.25

int main(void)

{

float wh;
float payclean, paytax, pay, base;
int val;

printf("***********************************************\n");
printf("Choise your tarif\n");
printf("1) $8.75/h	2) $9.33/h\n");
printf("3) $10.00/h	4) $11.20/h\n");
printf("5) Exit\n");
printf("***********************************************\n");

while (scanf("%d", &val) == 1)
{
	if (val < 1 || val > 5)
	{
		printf("enter wrong data\n");
		continue;		
	}
	
	switch(val)
	{
		case 1: base = BASE1;
		printf("You choise 1 tarif\n");
		break;
		case 2: base = BASE2;
		printf("You choise 2 tarif\n");
		break;
		case 3: base = BASE3;
		printf("You choise 3 tarif\n");
		break;
		case 4: base = BASE4;
		printf("You choise 4 tarif\n");
		break;
		case 5: 
		printf("exit\n");
		return 0;
	}


	printf("Enter your quantity work hours\n");
	scanf("%f", &wh);
	

	pay = wh * base;
	if (pay < COUNT1)
	{
		payclean = pay - (pay * TAX1);
		paytax = pay - payclean;
	}

	else if (pay >= COUNT1 && pay < (COUNT1 + COUNT2))
	{
		payclean = pay - ((COUNT1 * TAX1) + (pay - COUNT1) * TAX2);
		paytax = pay - payclean; 	
	}

	else if (pay >= (COUNT1 + COUNT2))
	{
		payclean = pay - ((COUNT1 * TAX1) + (COUNT2 * TAX2) + (pay - (COUNT1 + COUNT2)) * TAX3);
		paytax = pay - payclean;
	}
	printf("----------------------------\n");
	printf("you work %0.1f hours\n", wh);
	printf("%0.2f - you all pay\n", pay);
	printf("%0.2f - you clean pay\n", payclean);
	printf("%0.2f - you tax pay\n", paytax);
	printf("----------------------------\n");
	printf("\n");
	
	printf("***********************************************\n");
	printf("Choise your tarif\n");
	printf("1) $8.75/h	2) $9.33/h\n");
	printf("3) $10.00/h	4) $11.20/h\n");
	printf("5) Exit\n");
	printf("***********************************************\n");
}
	
	return 0;
}
