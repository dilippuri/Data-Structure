#include<stdio.h>

int main(void){
  int n,a,k,i,j;
  printf("Enter an odd integer: \n");
  scanf("%d", &n);
  if (n%2==0) {
    printf("Oops!Try again.:)\n");
    return 0;
  }
  printf("\n");
  i=1;j=1;
  a=(n+1)/2;
  while (i!=n) {
    for(k=0;k<a-j;k++){
        printf(" ");
    }
    for(k=0;k<i;k++){
        printf("*");
    }
    i=i+2;j++;
    printf("\n");
  }
  while (i>0) {
    for(k=0;k<j-a;k++){
        printf(" ");
    }
    for(k=0;k<i;k++){
        printf("*");
    }
    i=i-2;j++;
    printf("\n");
  }
  printf("\n");
 return 0;
}
