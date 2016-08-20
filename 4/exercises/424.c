#include <stdio.h>

int main(void){
    int i=1,j=2,k=3,m=2;

    printf("%d\n", i==1);
    printf("%d\n", j==3);
    printf("%d\n", i >= 1 && j < 4);
    printf("%d\n", m <= 99 && k < m);
    printf("%d\n", j >= i || k == m);

  return 0;
}
