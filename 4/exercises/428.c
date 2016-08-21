#include <stdio.h>

int main(void){
  int x,y;
  printf("enter the code of employee\n");
  switch (x) {
    case 1:
        printf("enter no of week he/she works: ");
        scanf("%d", &y);
        printf("Total wage: %d\n", y*500);
        break;
    case 2:
        printf("enter no of hours he/she works: ");
        scanf("%d", &y);
        if (y>40) {
          printf("Total wage: %.02f\n", (float)(y*10*1.5));
        }
        else{
          printf("Total wage: %d\n", y*10);
        }
        break;
    case 3:
        printf("enter gross weekly sale: ");
        scanf("%d", &y);
        printf("Total wage: %d\n", 250+y*0.057);
        break;
    case 4:
        printf("enter no of item he/she produced: ");
        scanf("%d", &y);
        printf("Total wage: %d\n", y*50);
        break;
    default:
        printf("enter correct code\n");
  }

  return 0;
}
