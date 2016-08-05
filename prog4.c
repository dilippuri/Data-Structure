#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//void leftrotate(int arr[], size_t size, size_t rotation);

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,d;
    size_t i,j;

    scanf("%d",&n);
    scanf("%d",&d);

    int arr[n];
    for(i=0; i<n; i++){
          arr[i]=i+1;
      }
for ( j = 0; j < d; j++) {
      int temp = arr[0];
      for (i=0; i<n-1;i++){
        arr[i]=arr[i+1];
      }
      arr[n-1]=temp;
  }

    for(i=0; i<n; i++){
          printf("%d ", arr[i] );
      }

  return 0;
}
/*
void LeftRotate(arr, n, x){
    int temp;
    int end;
    end = n;
    size_t j;
    temp = arr[0];
    for (j=0; j<end-1;j++){
      arr[j]=arr[j+1];
    }
    arr[end-1]=temp;
    }
*/
