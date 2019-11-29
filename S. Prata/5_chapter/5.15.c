//-------------------------------------------------
//Date: 29.11.2019
//Autor: Vlaimir Draga
//S. Prata. Chapter 5
// Programming exercise 15
//-------------------------------------------------



#include <stdio.h>

#define DAFNA 100.0
#define DEYDRA 100.0

int main (void)

{
    float ballanceDafna = DAFNA;
    float ballanceDeyadra= DEYDRA;

    int i = 1;

    while (ballanceDafna >= ballanceDeyadra)
    {   
        
        ballanceDafna = ballanceDafna + DAFNA * 0.1;
        ballanceDeyadra = ballanceDeyadra + ballanceDeyadra * 0.05;
        printf("Year: %-5d | balance dafna = %.2f     balance deydra = %.2f\n", i, ballanceDafna, ballanceDeyadra);
        i++;
    }


    return 0;
}
