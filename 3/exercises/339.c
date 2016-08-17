#include <stdio.h>

int main(void){
  int ctr=0,y,num,x;
  printf("Enter no: ");
  scanf("%d", &num);
  x=num;
  y=x/10;
  while (y != 0) {
    if(x%(y*10)==7){
      ctr++;}
      x=y;
      y=x/10;
    }
    printf("%d\n", y);
    if (x%7==0) {
      ctr++;
    }
    
  return 0;
}
