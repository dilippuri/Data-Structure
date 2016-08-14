#include <stdio.h>

int main(void) {

  int integre1;
  int integre2;
  int sum;

  printf("Enter first interger\n");
  scanf("%d", &integre1);

  printf("Enter second interger\n");
  scanf("%d", &integre2);

  sum = integre1 + integre2;

  printf("Sum is %d\n", sum);
  
  return 0;
}
