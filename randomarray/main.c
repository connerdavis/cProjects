#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    // decide the size of the array
    int i;
    int x[n];

    srand(time(NULL));
    for(i=0;i<n;i++){
        x[i] = rand() % 100;
    }

    printf("contents of the array: \n");
    for(i=0;i<n;i++){
        printf("%4d \n", x[i]);
    }
    int sum = 0;
    for(i=0;i<n;i++){
        sum+=x[i];
    }
    printf("Sum of numbers is: %d\n", sum);
    double average;
    average = (double)sum / n;
    printf("The average of the numbers is : %lf", average);



    return 0;
}
