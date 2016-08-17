#include <stdio.h>

int main(void){
  int ctr=0;
  while (ctr != 100) {
    printf("*");
    ctr++;
    if (ctr%10 == 0) {
      printf("\n");
    }
  }

  return 0;
}
