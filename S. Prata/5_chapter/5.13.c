//-------------------------------------------------
//Date: 29.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 13
//-------------------------------------------------



#include <stdio.h>

#define NUM 8
int main(void)
{
    int data1[NUM] = {0};
    int data2[NUM] = {0};
    int i = 0;
    while(i < NUM)
    {
        scanf("%d", &data1[i]);
        
        if (i == 0)
        {
            data2[i] = data2[i] + data1[i];
        }
            else
            {
                data2[i] = data2[i-1] + data1[i];
            }
        i++;

    }

    for (i = 0; i < NUM; i++)
    {
        printf("%-5d ", data1[i]);
    }
    printf("\n");
    for (i = 0; i < NUM; i++)
    {
        printf("%-5d ", data2[i]);
    }
    printf("\n");
return 0;

}