#include <stdio.h>

int main(void){
  int i;

  printf("A\tA+2\tA+4\tA+6\n");
  printf("\n");
  for (i = 1; i <= 5; i++){
    printf("%d\t%d\t%d\t%d\n", i*3,i*3+2,i*3+4,i*3+6);
  }
  return 0;
}
