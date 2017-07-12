#include <stdio.h>
#include <stdlib.h>

int main()
    int i;
    char response;
{
    for(i=1; i<=100; i++){
    printf("The count is: %d\n", i);
    printf("Do you wish to continue? Enter Y or y to continue any key to terminate:");
    scanf(" %c", &response);
    if (response != 'Y' && response != 'y')
        break;
    }
    printf("Your count is: %d\n", i);
    return 0;
}
