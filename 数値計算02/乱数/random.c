
// 線形合同法
#include <stdio.h>
unsigned rndnum=13;
unsigned irnd(void);

void main(void){
    int j;
    for(j=0;j<100;j++){
        printf("%8d\n", irnd());
    }
    printf("\n");
}

unsigned irnd(void){
    rndnum = (rndnum*109+1021) % 32768;
    return rndnum;
}