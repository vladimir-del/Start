#include <stdio.h>

int main (void)
{
    double num;
    printf("Enter value = ");
    scanf("%lf", &num);
    printf("Value = %lf of %e\n", num, num);

    return 0;
}