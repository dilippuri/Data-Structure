#include <stdio.h>

int main(void){
  float x;

  printf("\nEnter sales in dollars (-1 to end): ");
  scanf("%f", &x);

while (x != -1) {

    printf("Salary is: %.2f\n", 200 + x*.09);
    printf("\nEnter sales in dollars (-1 to end): ");
    scanf("%f", &x);

  }


return 0;
}
