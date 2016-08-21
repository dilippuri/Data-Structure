#include <stdio.h>

int main(void){
    char month[]={"January"};
    int i=1;
    printf("\n");
    printf("---\t---\t---\t---\t---\t---\t----\n");
    printf("|%s\t\t\t\t\t---|\n", month);
    printf("---\t---\t---\t---\t---\t---\t----\n");
    printf("|SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT|\n");
    printf("---\t---\t---\t---\t---\t---\t----\n");
    printf("|%d\t%d\t%d\t%d\t%d\t%d\t%d|\n",i--,i--,i--,i--,i--,i--,i--);
    printf("|%d\t%d\t%d\t%d\t%d\t%d\t%d|\n",i++,i++,i++,i++,i++,i++,i++);
    printf("|%d\t%d\t%d\t%d\t%d\t%d\t%d|\n",i++,i++,i++,i++,i++,i++,i++);
    printf("|%d\t%d\t%d\t%d\t%d\t%d\t%d|\n",i++,i++,i++,i++,i++,i++,i++);
    printf("|%d\t%d\t%d\t%d\t%d\t%d\t%d|\n",i++,i++,i++,i++,i++,i++,i++);
    printf("---\t---\t---\t---\t---\t---\t----\n");
    printf("\n");
    return 0;
}
