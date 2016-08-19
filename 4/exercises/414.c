#include <stdio.h>

int main(void){
  int i,x=1;

  printf("Num\tFactorial\n");
  for(i=1;i<=5;i++){
    x=x*i;
    printf("%d\t%d\n", i, x);
  }

  return 0;
}
