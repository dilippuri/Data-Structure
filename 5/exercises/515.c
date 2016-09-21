#include <stdio.h>
#include <math.h>

double hypotenuse(double x, double y){
  return sqrt(x*x + y*y);
}

int main(void){
  double side1, side2;
  printf("Enter side1 and side2: ");
  scanf("%lf %lf", &side1, &side2);
  printf("Hypotenuse is: %lf\n", hypotenuse(side1, side2));
}
