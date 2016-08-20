#include <stdio.h>

int main(void){
  int x;
  int i=0,j;
    printf("Enter a num: \n");
  while (i!=5) {    
    scanf("%d", &x);
    for(j=0;j<x;j++){
      printf("*");
    }
    i++;
    printf("\n");
  }

  return 0;
}
