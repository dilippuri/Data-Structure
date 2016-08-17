#include <stdio.h>

int main(void){

  int integer,a,b,c,d;
  int x,y,decode=0;

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

  a = (10+a-7)%10;
  b = (10+b-7)%10;
  c = (10+c-7)%10;
  d = (10+d-7)%10;

  decode = 1000*c + 100*d + 10*a + b;

  printf("%d\n", decode);

  return decode;
}
