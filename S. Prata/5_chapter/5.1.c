#include <stdio.h>

#define SIZE 26

int main (void)

{
char data[SIZE];

for (int i = 0; i < SIZE; i++)
{
    data[i] = 'a' + i;

    printf("%c ", data [i]);
}


}