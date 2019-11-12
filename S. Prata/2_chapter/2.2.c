#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter value from 0 to 127. Num = ");
    scanf("%d", &num);

    if (num < 0 || num > 127)  
        {
        printf("\nYou wrong\n");
        return 0;
        }


    printf("This number match ASCII symbol = \"%c\"\n", num);

    return 0;
}