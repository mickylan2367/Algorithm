#include <stdio.h>
long power(int, long);

void main(void){
    int n=4, i;
    long x=2;
    for(i=1;i<=n;i++){
        printf("%d %ld\n", i, power(i, x));
    }
}

long power(int n, long x){
    int i;
    long p=x;
    for(i=1;i<=n;i++){
        p *= x; 
    }
    return p;
}