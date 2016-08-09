#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    int n,d;
    size_t i,j;

    scanf("%d",&n);
    scanf("%d",&d);

    int arr[n];
    for(i=0; i<n; i++){
          arr[i]=i+1;
      }
    int temp;
    for(j=0; j<d; j++){
      temp = arr[0];
      for (i=0; i<n-1;i++){
        arr[i]=arr[i+1];
      }
      arr[n-1]=temp;
        for (i=0; i<n;i++){
        printf("%d ", arr[i]);
      }printf("\n");
    }

    //for(i=0; i<n; i++){
      //    printf("%d ", arr[i] );
      //}

  return 0;
}
