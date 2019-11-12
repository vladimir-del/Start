#include <stdio.h>

int main (void)
{
   
int hight;
int cm = 2.54;
   printf("Enter your hight is in duim = ");
   scanf("%d", &hight);
   printf("Your hight in cm = %d\n", hight * cm);
   return 0;
}