#include <stdio.h>
#define PI 3.14159;

int main(){

  float radius,diameter,circumference,area;

  printf("Enter the radius: \n");
  scanf("%f", &radius);

  printf("Diameter is: %.2f\n", radius*2);
  printf("Circumference is : %.2f\n", 2*PI*radius);
  printf("Area is: %.2f\n", PI*radius*radius);
  
  return 0;
}
