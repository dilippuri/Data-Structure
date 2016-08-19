#include <stdio.h>

int main(void){
    int x,smallest;
    int num;
    printf("Enter inputs: ");
    scanf("%d", &x);
    if (x>0) {
      scanf("%d", &num);
      smallest=num;
      while(x!=1) {
        scanf("%d", &num);
        if (smallest>num) {
          smallest = num;
        }
        x--;
      }
    printf("smallest is: %d\n", smallest);
    }
    else{
      return 0;
    }

  return 0;
}
