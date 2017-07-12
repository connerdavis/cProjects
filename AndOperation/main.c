#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("enter your age:");
   int age;
   scanf("%d", &age);
   printf("The age you entered is: %d\n", age);
   if (age >= 13 && age <= 19){
        printf("you are a teenager");
   }
   else if (age < 13 || age > 19){
        printf("you are not a teenager");
   }
   else{
        printf("you do not have an age");
   }


    /*int a = 100, b = 50, c;
    c = !(a>b);
    printf("%d\n", c);*/

    return 0;
}
