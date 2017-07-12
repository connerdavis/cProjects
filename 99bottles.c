#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
  int i;
  char s[200];
    for(i=99;i>=0;i--){
      sprintf(s,"echo %d bottles of beer on the wall? %d bottles of beer. Take one down pass it around %d bottles of beer on the wall | say",i, i, i);
	     system(s);
               }
    return 0;
    }

