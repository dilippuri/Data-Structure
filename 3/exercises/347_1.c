#include <stdio.h>



  return facto;
}

int main(void){

  int x,facto=1;
  printf("Enter Num.: \n");
  scanf("%d", &x);

  if (x==0) {
    facto = 1;
  }
  else{
    while (x != 1) {
      facto = facto * x;
      x--;
    }
  }
  
  printf("%d\n", facto);

  return 0;
}
