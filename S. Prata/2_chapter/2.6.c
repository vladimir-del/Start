#include <stdio.h>

int main (void)
{
    int volume;
    double mol = 3e-23;
    int quart = 950;
    
    printf("Enter value volume=");
    scanf("%d", &volume);
    printf("In this volume %e molucels\n", (quart / mol) * volume);
    return 0;
}