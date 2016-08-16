#include <stdio.h>

int main(void){
  float x,y,z;

  printf("\nEnter loan principal (-1 to end): ");
  scanf("%f", &x);

while (x != -1) {

    printf("Enter interest rate: ");
    scanf("%f", &y);
    printf("Enter term of the loan in days: ");
    scanf("%f", &z);
    printf("The interest charge is %.2f\n", x*y*z/365);

    printf("\nEnter loan principal (-1 to end): ");
    scanf("%f", &x);

  }

return 0;
}
