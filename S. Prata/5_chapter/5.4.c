//-------------------------------------------------
//Date: 10.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 4
//-------------------------------------------------

#include<stdio.h>

int main(void)
{
    float num, inch, foot, temp;
    printf("Enter lenght value\n");
    scanf("%f", &num);
    while (num>0)
    {
        temp = num / 2.54;
        foot = temp / 12;
        inch = temp - ((int)foot * 12);
        printf("%.2f cm is %d foot and %.1f inch\n", num, (int)foot, inch);
        printf("Enter lenght value\n");
        scanf("%f", &num);
    }
    printf("You input invalid number. Exit\n");
    return 0;
    
}