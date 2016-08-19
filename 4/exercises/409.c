#include <stdio.h>

int main(void){
    int x,num;
    int sum=0;
    printf("Enter the # of inputs: ");
    scanf("%d", &x);
    while (x!=0) {
      scanf("%d", &num);
      sum += num;
      x--;
    }
    printf("Sum is: %d\n", sum);
}
