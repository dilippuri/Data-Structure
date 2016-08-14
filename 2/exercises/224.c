#include <stdio.h>

int main(void){

  int integer;
  printf("Enter integer\n");
  scanf("%d", &integer);

  if (integer%2 == 0) {
    printf("%d is even.\n", integer);
  }
  else{
    printf("%d is odd.\n", integer);
  }

  return 0;

}
