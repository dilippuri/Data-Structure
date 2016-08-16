#include <stdio.h>

int main(void){
  float x,y;
  int ctr=0;
  float total=0;
  printf("\nEnter the gallons used (-1 to end): ");
  scanf("%f", &x);

while (x != -1) {
    ctr++;
    printf("Enter the miles driven: ");
    scanf("%f", &y);
    total += y/x;
    printf("The miles/gallon for this tank was %f\n", y/x);
    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &x);
  }

  printf("The overall average miles/gallon was %f\n", total/ctr);

return 0;
}
