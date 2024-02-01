#include <stdio.h>
#include <math.h>

double myexp_minus(double);
double myexp_plus(double);
void main(void){
    double x;
    printf("    x   myexp(x)    exp(x)\n");
    for(x=-40;x<0;x+=10){
        printf("%5.1f %14.6g %14.6g\n", x, myexp_minus(x), exp(x));
    }
    for(x=0;x<=40;x+=10){
        printf("%5.1f %14.6g %14.6g\n", x, myexp_plus(x), exp(x));
    }
}

double myexp_minus(double x){
    double EPS = 1e-08;
    double s =1.0;
    double e=1.0, d;
    int k;

    for(k=1;k<=200;k++){
        d=s;
        e = e*x/k;
        s = s+e;
        if(fabs(s-d)<EPS*fabs(d)) return 1/s;
    }

    return 0.0; /*収束しないとき*/
}

double myexp_plus(double x){
    double EPS = 1e-08;
    double s =1.0;
    double e=1.0, d;
    int k;

    for(k=1;k<=200;k++){
        d=s;
        e = e*x/k;
        s = s+e;
        if(fabs(s-d)<EPS*fabs(d)) return s;
    }

    return 0.0; /*収束しないとき*/
}