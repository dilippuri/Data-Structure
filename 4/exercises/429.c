#include<stdio.h>

int main(void){
  int x=0,y=0;

  printf("%d\t%d\n", !(x<5) && !(y>=7), !((x>5) || (y>=7)));
  printf("%d\t%d\n", !((x<=8) && (y>4)), !(x<=8) || !(y>4));

 return 0;
}
