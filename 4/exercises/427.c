#include <stdio.h>

int main(void){

    //int side1 = 0;
    //int side2 = 0;
    //int rightSide = 0;
    int i,a,c;
    printf("Side1\tSide2\tSide3\n");
    for(i=1;i<=500;i++){
        //side1++;
        for(a=1;a<=500;a++){
            //side2++;
            for(c=1;c<=500;c++){
                //rightSide++;
                int rightSideSqr = c*c;
                int side1Sqr = i*i;
                int side2Sqr = a*a;

                if(rightSideSqr == (side1Sqr+side2Sqr)){
                    printf("%d\t%d\t%d\n", i, a, c);
                }
            }
        }
    }

  return 0;
}
