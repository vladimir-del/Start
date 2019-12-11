//-------------------------------------------------
//Date: 10.12.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 7
// Programming exercise 11
//-------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

//Grocery
#define ART 2.05	//artichoke
#define BEET 1.15	//beet
#define CAR 1.09	//carrot
#define DELIVERY1 6.5
#define DELIVERY2 14



int main (void)

{
	char var;
	float weightArt, weightAllArt, weightBeet, weightAllBeet, weightCar, weightAllCar, allweight;
	float deliveryCost;
	float costArt, costBeet, costCar, allCostFood;
	bool EndFlag = true;
	
	weightArt = 0;
	weightBeet = 0;
	weightCar = 0;
	weightAllArt = 0;
	
	
	printf("Select 'a' if you want to add artishoks\n");
	printf("Select 'b' if you want to add beet\n");
	printf("Select 'c' if you want to add carrot\n");
	printf("Select 'q' for exit\n");
	
	scanf("%c", &var);
	
	while (EndFlag)
	{
	

		
		switch(var)
		{
			case 'a': 
			printf("Input quantity artishoks = ");
			scanf("%f", &weightArt);
			weightAllArt += weightArt;
			printf("allweight artishoks = %.2f\n", weightAllArt);
			break;
			
			case 'b':
			printf("Input quantity beet = ");
			scanf("%f", &weightBeet);
			weightAllBeet += weightBeet;
			printf("allweight beet = %.2f\n", weightAllBeet);
			break;
			
			case 'c':
			printf("Input quantity carrot = ");
			scanf("%f", &weightCar);
			weightAllCar += weightCar;
			printf("allweight carrot = %.2f\n", weightAllCar);
			break;
			
			case 'q': 
			EndFlag = false;
			break;
		}
		
		
		scanf("%c", &var);
		
	}

	allweight = weightAllArt + weightAllBeet + weightAllCar;
	
	printf("\n");
	printf("-----------------------------------\n");
	costArt = weightAllArt * ART;
	printf("all cost artishoks = %.2f$\n", costArt);
	costBeet = weightBeet * BEET;
	printf("all cost beet = %.2f$\n", costBeet);
	costCar = weightCar * CAR;
	printf("all cost carrot = %.2f$\n", costCar);
	allCostFood = costArt + costBeet + costCar;
	printf("-----------------------------------\n");
	printf("\n");
	
	if (allCostFood>= 100)
	{
		allCostFood = allCostFood - (allCostFood *0.05);
		printf("Becouse you caost height 100$, you get 5%% discount\n");
		printf("\n");
		printf("all cost for food = %.1f$\n" , allCostFood);
	}
	else
	{
		printf("\n");
		printf("all cost for food= %.1f$\n" , allCostFood);
	}
	
	if (allweight <= 5)
	{
		printf("You food weight = %.1f ft. \nand that is < 5 therefore cost of delivery = 6.5$ by ft.\n", allweight);
		deliveryCost = DELIVERY1 * allweight;
	} 
	else if (allweight > 5 && allweight <= 20)
	{
		printf("You food weight = %.1f ft. \nand that is > 5 and < 20 therefore cost of delivery = 14$ by ft.\n", allweight);
		deliveryCost = DELIVERY2 * allweight;
	}
	else if (allweight > 20)
	{
		printf("You food weight = %.1f ft. \nand that is > 20 therefore cost of delivery = 14$ by plus 0.5$ for each ft.\n", allweight);
		deliveryCost = DELIVERY2 * 20.0 + 0.5 * (allweight - 20);
	}
	printf("\n");
	printf("Delivery cost = %.2f$", deliveryCost);
	printf("\n");
	
	printf("Final cost you purchase = %.1f$\n", allCostFood + deliveryCost);
	printf("\n");
	
	return 0;
}