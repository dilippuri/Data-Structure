#include <stdio.h>

int main(void){
  int hrs;
  float rate;

  printf("\nEnter # of hours worked (-1 to end): ");
  scanf("%d", &hrs);

while (hrs != -1) {

    printf("Enter hourly rate of the worker ($00.00): ");
    scanf("%f", &rate);
    if (hrs>40) {
        printf("Salary is %.2f\n", hrs*rate + (hrs-40)*rate*(.5));
    }
    else{
        printf("Salary is %.2f\n", hrs*rate);
    }


    printf("\nEnter # of hours worked (-1 to end): ");
    scanf("%d", &hrs);

  }

return 0;
}
