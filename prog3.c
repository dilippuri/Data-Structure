#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int arr[6][6];
    int res[16];
    for(int arr_i = 0; arr_i < 6; arr_i++){
       for(int arr_j = 0; arr_j < 6; arr_j++){
          scanf("%d",&arr[arr_i][arr_j]);
       }
    }
    int i,j;
    int x=0;
    for(i = 0; i < 4; i++){
       for(j = 0; j < 4; j++){
          res[x] = arr[i][j]+arr[i][j+1]+arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
           x++;
       }
    }
    int max=res[0];
    for(i=1; i<16; i++){
        if(max<res[i]){
            max = res[i];
        }
    }
    printf("%d", max);
    return 0;
}
