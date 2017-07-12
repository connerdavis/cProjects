#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count;
    for(count=1;count<=100;count++){
        if (count%2 == 0)
            continue;

        printf("The count is: %d\n", count);
    }
    return 0;
}
