#include <stdio.h>

int main(void){
  int y=1;

  printf("Number\tSquare\tCube\n");
  while (y != 11) {
    printf("%d\t%d\t%d\n", y, y*y, y*y*y);
    y++;
  }

  return 0;
}
