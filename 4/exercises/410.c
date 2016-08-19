#include <stdio.h>

int main(void){
    int x,ctr=0;
    int sum=0;
    printf("Enter inputs: ");
    scanf("%d", &x);
    while (x!=9999) {
      ctr++;
      sum += x;
      scanf("%d", &x);
    }
    printf("Avg is: %f\n", (float)(sum+9999)/++ctr);
}
