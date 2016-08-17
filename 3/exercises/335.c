#include <stdio.h>

int main(void){

  int integer,x,y,z;
  int ctr=5;
  int new=0;

  printf("Enter integer\n");
  scanf("%d", &integer);
  x = integer;

  while (ctr != 0) {
    y = x/10;
    z = x%(y*10);
    new = new*10+z;
    x = y;
    ctr = x/10;
  }
      new = new*10+y;
      if (new == integer) {
        printf("Given no %d is a palindrome.\n", integer);
      }
      else{
        printf("Given no %d is not a palindrome.\n", integer);
      }

  return 0;
}
