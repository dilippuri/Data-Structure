#include <stdio.h>

int main(void){
  int number,i;
  int largest=0;

  for (i = 1; i <= 10; i++){
    printf("Enter non-negative integer: ");
    scanf("%d", &number);

    if (largest<number) {
      largest = number;
    }
  }

  printf("Largest is %d\n", largest);
  
  return 0;
}
