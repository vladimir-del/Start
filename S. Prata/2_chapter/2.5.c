#include <stdio.h>

int main (void)
{
    int years;
    int secInYear = 3.156e7;
    
    
    printf("Enter old in years=");
    scanf("%d", &years);
    printf("Your old in sec = %d\n", years * secInYear);
    return 0;
}