#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, number;
    long t = time(NULL);
    srand(t);

    for(i=1;i<=10;i++){
            number = rand() % 100;
            printf("The random number is: %d\n", number);

    }

    return 0;
}
