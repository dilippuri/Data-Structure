#include<stdio.h>
#include <math.h>

int main(void){
  int i;
  float value=4,x=3;
  printf("The value of PI\n");

  for(i=1;i<=200;i++){
    value = value + (float)4*pow(-1,i)*(1/x);
    x += 2;
    printf("%f\n", value);
  }

 return 0;
}
