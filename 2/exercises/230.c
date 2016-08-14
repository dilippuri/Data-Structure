#include <stdio.h>

int main(void){

  int integer,x,y,z,i;
  int ctr=0,digit[20];
  printf("Enter integer\n");
  scanf("%d", &integer);
  x = integer;
  y=x/10;
  while (y != 0) {
    z = x%(y*10);
    digit[ctr] = z;
    x = y;
    y = x/10;
    ctr++;
  }
    digit[ctr] = x;

    for (i = 0; i <= ctr; i++) {
      printf("%d ", digit[i]);
    }
    printf("\n");
  return 0;
}
