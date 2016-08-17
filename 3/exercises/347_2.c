#include <stdio.h>

int fact(int x){
  int facto=1;

  if (x==0) {
    facto = 1;
  }
  else{
    while (x != 1) {
      facto = facto * x;
      x--;
    }
  }

  return facto;
}

int main(void){

  float e=0,term;
  int i,y;

  printf("No of terms of estimation: \n");
  scanf("%d", &y);

  for (i=0; i<y; i++) {
    term =(float)1/fact(i);
    e = e+term;
  }

  printf("%f\n", e);

  return 0;
}
