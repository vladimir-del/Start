//-------------------------------------------------
//Date: 29.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 11
//-------------------------------------------------


#include <stdio.h>



int main (void)

{
    int maxNum;
    printf("Enter max numbers:");
    scanf("%d", &maxNum);

    //firs sequence
    float val1 = 1.0;
    for (int i = 2; i <= maxNum; i++)
    {
        val1 = val1 + 1.0/(float)i;
    }

    //second sequance
    
    //only plus elements
    double val2 = 0.0;
    for (int j = 1; j <= maxNum; j++)
    {
        val2 = val2 + 1.0 / j;
        j++;
    }
    double val3 = 0.0;
    
    //only minus elements
    for (int k = 2; k <=maxNum; k++)
    {
        val3 = val3 + (-1.0 / k);
        k++;
    }

    //summ both elemets
    double val4 = val2 + val3;

    printf("%f\n", val4);

    return 0;
}