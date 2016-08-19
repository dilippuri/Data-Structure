#include <stdio.h>
#include <math.h>//cc -lm prog.c >to compile

int main(void){
  double amount;
  double principal = 1000.0;
  int rate;
  int year=1;

  printf("%4s%21s\n", "Rate(%)", "Amount on deposit");

  for(rate=5; rate<=10; rate++){
    amount = principal * pow(1.0 + (rate*0.01), year);
    printf("%4d%21.2f\n", rate, amount);
  }

  return 0;
}
