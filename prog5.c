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
printf("\n\n");
for( i = 0; i < n; i++) {
  printf("%d ", arr[i] );
}

for(i=0; i<n-1; i++){
  printf("Step no. %d \n",i+1);
  for(j=0; j<n-(i+1); j++){
    //----------------------------------
      for(k=0; k<n; k++){
        if(k==j){
          printf("(%d) ", arr[k]);
        }
        else{
          printf("%d ", arr[k]);
        }
      }
    //----------------------------------
    if(arr[j]>arr[j+1]){
      temp = arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=temp;
    }
  printf("\n");
}
}
  printf("\n");
for( i = 0; i < n; i++) {
  printf("%d ", arr[i] );
}
printf("\n");
  return 0;
}
