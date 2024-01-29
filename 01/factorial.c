#include <stdio.h>
long factorial(int);

void main(void){
    int n=5, i;
    for(i=0;i<n;i++){
        printf("%d %ld \n", i, factorial(i));   
    }
}

long factorial(int n){
    long p=1, i;
    for (i=1;i<=n;i++){
        p *= i; 
    }
    return p;
}