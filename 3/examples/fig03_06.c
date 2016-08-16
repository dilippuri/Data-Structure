#include <stdio.h>

int main(void){
  int counter;
  int grade;
  int total;
  int average;

  total = 0;
  counter = 1;

  while (counter <= 10) {
    printf("Enter grade: ");
    scanf("%d", &grade);
    total = total + grade;
    counter++;
  }

  average = total/10;

  printf("Class average is %d\n", average);

  return 0;
}
