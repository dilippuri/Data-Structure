#include <stdio.h>
#define PI 3.14159

int main(void){
  int radius;
  float diameter, circumference, area;

  printf("Input the radius: ");
  scanf("%d", &radius);

  diameter = 2 * radius;
  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("Diameter is %.2f\nCircumference is %.2f\nArea is %.2f\n", diameter, circumference, area);

  return 0;
}
