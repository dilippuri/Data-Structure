#include <stdio.h>

int main(void){

  int integer1, integer2;
  int sum, prod, dif, remad;
  float quot;

  printf("Enter two integers\n");
  scanf("%d%d", &integer1, &integer2);

  if (integer1 > integer2) {
    printf("%d is larger.\n", integer1);
  }
  else if (integer1 < integer2) {
    printf("%d is larger.\n", integer2);
  }
  else{
    printf("These numbers are equal.\n");
  }

  return 0;

}
