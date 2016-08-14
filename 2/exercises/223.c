#include <stdio.h>

int main(void){

  int i, j, k, l, m;

  printf("Input five different integers: ");
  scanf("%d %d %d %d %d", &i, &j, &k, &l, &m);

  if (i>j) {
    if (i>k) {
      if(i>l){
        if (i>m) {
          printf("Largest is %d\n", i);
        }
        else{
          printf("Largest is %d\n", m);
        }
      }
      else{
        if (l>m) {
          printf("Largest is %d\n", l);
        }
        else{
          printf("Largest is %d\n", m);
        }
      }
    }
    else{
      if (k>l) {
        if (k>m) {
          printf("Largest is %d\n", k);
        }
        else{
          printf("Largest is %d\n", m);
        }
      }
      else{
        if (l>m) {
          printf("Largest is %d\n", l);
        }
        else{
          printf("Largest is %d\n", m);
        }
      }
    }
  }
  else{
    if (j>k) {
      if (j>l) {
        if (j>m) {
          printf("Largest is %d\n", j);
        }
        else{
          printf("Largest is %d\n", m);
        }
      }
      else{
        if (l>m) {
          printf("Largest is %d\n", l);
        }
        else{
          printf("Largest is %d\n", m);
        }
      }
    }
    else{
      if (k>l) {
        if (k>m) {
          printf("Largest is %d\n", k);
        }
        else{
          printf("Largest is %d\n", m);
        }
      }
      else{
        if (l>m) {
          printf("Largest is %d\n", l);
        }
        else{
          printf("Largest is %d\n", m);
        }
      }
    }
  }

  return 0;
}
