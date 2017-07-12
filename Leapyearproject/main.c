#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d", &year);
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0)
                printf("This is a leap year");
            else
                printf("This is not a leap year");
        }
        else
            printf("This is a leap year");
    }

    else
        printf("This is not a leap year");

 //another way to simplify this program

/* if (year%4 == 0 && year%100 != 0 || year%400 == 0)
    printf("Yes, %d is a leap year", year);
else
    printf("No, %d is not a leap year", year); */

    return 0;
}
