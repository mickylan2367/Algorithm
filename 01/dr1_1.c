#include <stdio.h>

double fn(double, double *, int);

void main(void){
    double a[] = {1,2,3,4,5}; /*係数リスト, 5x^4 + 4x^3 + 3x^2 + 2x + 1*/
    double x;
    for(x=1;x<=5;x++){
        printf("fn(%f)=%f\n", x, fn(x, a, 4));
    }
}

double fn(double x, double a[], int n){
    double p;
    int i;
    p=a[n];/*pに各係数をいれる*/
    for(int i=n-1;i>=0;i--){
        p=p*x+a[i];
    }
    return p;
}