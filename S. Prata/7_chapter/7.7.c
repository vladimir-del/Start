//-------------------------------------------------
//Date: 06.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 7
//-------------------------------------------------


#include <stdio.h>

#define BASE 10.0
#define COUNT1 300
#define COUNT2 150
#define TAX1 0.15
#define TAX2 0.2 
#define TAX3 0.25

int main(void)

{

float wh;
float payclean, paytax, pay;

printf("Enter your quantity work hours\n");

scanf("%f", &wh);
pay = wh * BASE;
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
	printf("%0.2f - you all pay\n", pay);
	printf("%0.2f - you clean pay\n", payclean);
	printf("%0.2f - you tax pay\n", paytax);
	return 0;
}