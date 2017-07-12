#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Enter the length of the array: ");
   scanf("%d", &n);
   // to find out how many elements the array will have

   int x[n];
   int i;
   for (i=0;i<n;i++){
    printf("Enter integer to index: %d: ", i);
    scanf(" %d", &x[i]);
   } // declaring the array and assigning each element a number

    printf("Contents of the array: \n");
    for(i=0;i<n;i++){
        printf("x[%d] = %d\n", i, x[i]);
    }// printing the conents of the array



    return 0;
}
