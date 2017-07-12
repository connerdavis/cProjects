#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age;
   printf("Enter your age:");
   scanf("%d", &age);
   age >= 13 && age <= 19?printf("You are a teenager"):printf("You are not a teenager");
    return 0;
}
