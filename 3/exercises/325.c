#include <stdio.h>

int main(void){
  int i;

  printf("N\t10*N\t100*N\t1000*N\n");
  printf("\n");
  for (i = 1; i <= 10; i++){
    printf("%d\t%d\t%d\t%d\n", i,i*10,i*100,i*1000);
  }
  return 0;
}
