#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define WIDTH 1000



int main (void)
{
    
    int i, j;
    int arr[10][WIDTH];

    for (i = 0; i < 10; i++)
    {
        int count[11] = {0};
        sleep(1);
        srand(time(NULL));
        for (j = 0; j < WIDTH; j++)
        {
            
            *(*(arr + i) + j) = (rand() % 10) + 1;
            ++count[*(*(arr + i) + j)];
            
        }
        printf("string = %2d:  ", i +1);
        for (int j = 1; j < 11; ++j) 
            printf("%-4d ", *(count + j));
        puts("");

    }
    return 0;
}
