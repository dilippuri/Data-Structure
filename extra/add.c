#include<stdio.h>
#include "add.h"

void main() {
   int num1 = 10, num2 = 10, num3;
   num3 = add(num1, num2);
   printf("Addition of Two numbers : %d\n", num3);
}
