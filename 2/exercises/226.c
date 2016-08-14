#include <stdio.h>

int main(void){

  int integer1, integer2;

  printf("Enter two integers\n");
  scanf("%d%d", &integer1, &integer2);

  if (integer1 % integer2 == 0) {
    printf("%d is multiple of %d.\n", integer1, integer2);
  }
  else{
    printf("%d is not a multiple of %d.\n", integer1, integer2);
  }

  return 0;

}
