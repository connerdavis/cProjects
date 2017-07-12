#include <stdio.h>
#include <stdlib.h>

int main()
{
    //for loop for sum of first natural numbers
    int i, n, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum = 0;
    for(i=1; i<=n; i++){
        sum += i;
    }
    printf("The sum of Natural numbers before %d is %d\n", n, sum);

    return 0;
}
