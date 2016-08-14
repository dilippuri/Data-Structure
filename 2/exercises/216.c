#include <stdio.h>

int main(void){

  int integer1, integer2;
  int sum, prod, dif, remad;
  float quot;

  printf("Enter two integers\n");
  scanf("%d%d", &integer1, &integer2);

  sum = integer1 + integer2;

  prod = integer1 * integer2;

  dif = integer1 - integer2;

  quot = integer1 / integer2;

  remad = integer1 % integer2;

  printf("Sum: %d\n, Product: %d\n, Difference: %d\n, Quotient: %f\n, Remainder: %d\n", sum, prod, dif, quot, remad);

  return 0;
}
