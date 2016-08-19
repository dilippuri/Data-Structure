#include <stdio.h>

int main(void){
  int i,a,j=0;

  while (j!=10) {
    for(i=0;i<=j;i++){
      printf("*");
    }
    j++;
    printf("\n");
  }
  //---------------------
  printf("\n");
  j=1;
  while (j!=11) {
    for(i=10;i>=j;i--){
      printf("*");
    }
    j++;
    printf("\n");
  }
  //---------------------
  printf("\n");
  j=1;
  while (j!=11) {
    for(i=11-j;i>0;i--){
      printf(" ");
    }
    for(a=1;a<j;a++){
      printf("*");
    }
    j++;
    printf("\n");
  }

  return 0;
}
