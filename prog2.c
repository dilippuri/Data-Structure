#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, arr_i;
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    for(arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(arr_i = n-1; arr_i >= 0; arr_i--){
       printf("%d ",arr[arr_i]);
    }
   return 0;
}
