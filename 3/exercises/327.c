#include <stdio.h>

int main(void){
  int number,i;
  int largest1=0;
  int largest2=0;

  for (i = 1; i <= 10; i++){
    printf("Enter non-negative integer: ");
    scanf("%d", &number);

    if (largest1<number) {
      largest2 = largest1;
      largest1 = number;      
    }
    else{
      if (largest2<number) {
        largest2 = number;
      }
    }
  }

  printf("1st Largest is %d\n", largest1);
  printf("2nd Largest is %d\n", largest2);

  return 0;
}
