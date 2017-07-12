#include <stdio.h>
#include <stdlib.h>

int main()
{
    //program to find some of N natural numbers
    int sum, i , n;
    printf("Enter a number:");
    scanf("%d", &n);
    sum = 0;
    i = 1;
    while (i<=n)
        sum += i++;

    printf("The sum of %d Natural numbers is %d\n", n, sum);
    return 0;
}
