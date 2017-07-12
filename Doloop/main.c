#include <stdio.h>
#include <stdlib.h>

int main()
{
    //program to enter age and ask to re-enter different age if teenager

    int age;
    char response;
    do {
        printf("This website has adult content\n Enter your age:");
        scanf("%d",&age);
        if (age<18){
              printf("You cannot enter this site\n");
            printf("Would you like to enter a different age? (y/n):\n");
            scanf(" %c", &response);
        }

        else
            printf("Welcome to Pornhub\n");
    } while (response == 'Y' || response == 'y' && age < 18);
}
