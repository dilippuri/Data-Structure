#include <stdio.h>

int main(void){
  float y,z,a,b;
  int x;
  printf("\nEnter account number (-1 to end): ");
  scanf("%d", &x);

while (x != -1) {

    printf("Enter beginning balance: ");
    scanf("%f", &y);
    printf("Enter total charges:");
    scanf("%f", &z);
    printf("Enter total credits: ");
    scanf("%f", &a);
    printf("Enter credit limit: ");
    scanf("%f", &b);

    if (b<(y+z-a)) {
    printf("\nAccount: %d",x);
    printf("\nCredit limit: %.2f", b);
    printf("\nBalance: %.2f ", y + z - a);
    printf("\nCredit Limit Exceeded.\n");
    }

    printf("\nEnter account number (-1 to end): ");
    scanf("%d", &x);

  }

return 0;
}
