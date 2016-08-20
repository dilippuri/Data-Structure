#include <stdio.h>

int main(void){
  int x,y;
  float total = 0;
  int i=0,j;

  while (i!=7) {
    printf("Enter a pair of values: ");
    scanf("%d%d", &x, &y);
    switch (x) {
      case 1:
            total = total + y * 2.98;
            break;
      case 2:
            total = total + y * 4.5;
            break;
      case 3:
            total = total + y * 9.98;
            break;
      case 4:
            total = total + y * 4.49;
            break;
      case 5:
            total = total + y * 6.87;
            break;
      default:
            printf("wrong product number entered.\n");
            break;
    }
    i++;
  }
  printf("Total amount is: %.2f\n", total);
  return 0;
}
