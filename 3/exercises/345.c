#include <stdio.h>

int main(){

  float side1, side2, side3;
  int flag=0;

  printf("Enter the side1: \n");
  scanf("%f", &side1);
  printf("Enter the side2: \n");
  scanf("%f", &side2);
  printf("Enter the side3: \n");
  scanf("%f", &side3);

  if (side1>side2) {
    if (side1>side3) {
      if (side1*side1 == side2*side2 + side3*side3) {
        printf("Sides %.2f, %.2f, %.2f can be represented as sides of a right angle triangle\n", side2, side3, side1);
        flag=1;
      }
    }
    else{
      if (side3*side3 == side2*side2 + side1*side1) {
        printf("Sides %.2f, %.2f, %.2f can be represented as sides of a right angle triangle\n", side2, side1, side3);
        flag=1;
      }
    }
  }
  else{
      if (side2>side3) {
        if (side2*side2 == side2*side2 + side3*side3) {
          printf("Sides %.2f, %.2f, %.2f can be represented as sides of a right angle triangle\n", side3, side1, side2);
          flag=1;
        }
      }
      else{
        if (side3*side3 == side2*side2 + side1*side1) {
          printf("Sides %.2f, %.2f, %.2f can be represented as sides of a right angle triangle\n", side2, side1, side3);
          flag=1;
        }
      }
  }

  if (flag==0) {
    printf("Sides %.2f, %.2f, %.2f can not be represented as sides of a right angle triangle\n", side1, side2, side3);
  }

  return 0;
}
