#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, arr_i;
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }

  int i,j,k,temp;
  printf("\n");

for(i=0; i<n; i++){
  printf("%d ", arr[i]);
}




  return 0;
}
