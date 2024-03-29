#include <stdio.h>
#include <math.h>

double myexp(double);

void main(void){
    double x;
    printf("     x    myexp(x)     exp(x)\n");
    for(x=0;x<=40;x+=10){
        // xの値は10ずつ近似する。
        printf("%5.1f %14.6g %14.6g\n", x, myexp(x), exp(x));
    }
}

double myexp(double x){
    double EPS = 1e-08;
    double s=1.0;
    double e=1.0, d;
    int k;

    for(k=1;k<=200;k++){
        d=s;
        /*
            そっか...考えてみれば、階乗を計算って
            コンピュータで計算することを考えると結構楽だ..
        */
        e = e*x/k; 
        s = s+e;
        if(fabs(s-d)<EPS*fabs(d)) return s; /*打ち切り誤差*/
    }
    return 0.0; /*収束しない時.最大で200項計算する。*/

}