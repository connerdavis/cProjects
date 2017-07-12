#include <stdio.h>
#include <stdlib.h>

int main()
{
  char ch;
  printf("Enter a character:");
  scanf("%c", &ch);

  if(ch>='A' && ch <='Z'){
    ch = ch + 32;
    printf("The corresponding lowercase character is: %c\n", ch);
  }
  else if(ch>='a'&& ch<='z'){
    ch = ch - 32;
    printf("The corresponding uppercase character is: %c\n", ch);
  }
  else{
    printf("This is not a character");
  }
    return 0;
}
