#include <stdio.h>

long fibonacci();
void main(void){
    int n=8, i;
    long x1=1,x2=1, p;
    
    for(i=2;i<=n;i++){
        printf("%d %ld\n", i, fibonacci(x1, x2));
        x1, p = fibonacci(a, i);
    }
}

long fibonacci(long x1, long x2){
    long p = x1 + x2;
    return x1, p;
}