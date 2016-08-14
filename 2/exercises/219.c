#include <stdio.h>

int main(void){

  int integer1, integer2, integer3;
  int sum, prod;
  float avg;

  printf("Input htree different integers: ");
  scanf("%d %d %d", &integer1, &integer2, &integer3);

  sum = integer1 + integer2 + integer3;

  prod = integer1 * integer2 * integer3;

  avg = sum/3;

  printf("Sum is %d\nAverage is %.2f\nProduct is %d\n", sum, avg, prod);

  if (integer1 < integer2) {
    if (integer1 < integer3) {
      printf("Smallest is %d\n", integer1);
    }
    else{
      printf("Smallest is %d\n", integer3);
    }
  }
  else if (integer2 < integer3) {
    printf("Smallest is %d\n", integer2);
  }
  else{
    printf("Smallest is %d\n", integer3);
  }

  if (integer1 > integer2) {
    if (integer1 > integer3) {
      printf("Largest is %d\n", integer1);
    }
    else{
      printf("Largest is %d\n", integer3);
    }
  }
  else if (integer2 > integer3) {
    printf("Largest is %d\n", integer2);
  }
  else{
    printf("Largest is %d\n", integer3);
  }


  return 0;
}
