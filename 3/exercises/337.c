#include <stdio.h>

int main(void){
  int ctr=0;
  while (ctr != 300000000) {
    ctr++;
    if (ctr%100000000 == 0) {
      printf("%d\n", ctr);
    }
  }

  return 0;
}
