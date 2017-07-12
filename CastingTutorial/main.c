#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a = 5, b = 2;
   float c;
   c = a / b;
   printf("c = %f\n", c);
// This is how you get the remander with casting

   float r;
   r = a / (float) b;
   printf("r = %f\n", r);

}
