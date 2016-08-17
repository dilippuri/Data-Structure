#include <stdio.h>

int main(){

  long int ctr=2;
  for(;;) {
    printf("%ld\n", ctr);
    ctr = 2*ctr;
  }

  return 0;
}
