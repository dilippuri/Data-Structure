#include <stdio.h>

int prod(int x){
  int j,v=1;
  for(j=0; j<x; j++){
    v = v*2;
  }
  return v;
}

int main(void){

  int integer,x,y,z;
  int ctr;
  int new=0;
  int i=0;

  printf("Enter integer\n");
  scanf("%d", &integer);
  x = integer;
  y=x%10;
  ctr=x/10;
  while (ctr != 0) {
    y = x/10;
    z = x%(y*10);
    new = new+prod(i)*z;
    i++;
    x = y;
    ctr = x/10;
  }

        new = new+prod(i)*y;
        printf("%d\n", new);

  return 0;
}
