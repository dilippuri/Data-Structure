#include <stdio.h>

int main(void){

  int integer,a,b,c,d;
  int x,y,encode=0;

  printf("Enter integer\n");
  scanf("%d", &integer);
  x=integer/10;
  y=integer;
  a = y%(x*10);
  y=x;
  x=x/10;
  b = y%(x*10);
  y=x;
  x=x/10;
  c = y%(x*10);
  d = x;

  a = (a+7)%10;
  b = (b+7)%10;
  c = (c+7)%10;
  d = (d+7)%10;

  encode = 1000*c + 100*d + 10*a + b;

  printf("%d\n", encode);

  return encode;
}
