#include <stdio.h>
#include <math.h>

/*ええ..こんな風に関数を定義できるんだ...*/
// 被積分関数
// #define f(x) (sqrt(4-x*x)) 

double function(double);

void main(void){
    int k;
    double a, b, n, h, x, s, sum=0;

    printf("積分区間 A, B を入力してください\n");
    printf("A= ? (Bより大きい値を設定してください)\n");
    scanf("%lf", &a);
    printf("B= ? (Aより小さい値を設定してください)\n");
    scanf("%lf", &b);

    n = 50;       /*区間を分割する数*/
    h = (b-a)/n; /*区間幅*/
    x = a;
    s = 0;

    for(k=1;k<=n-1;k++){
        x = x+h;
        printf("h=%f func=%f\n", h, function(x));
        s = s + function(x);
    }
    
    sum = h*((function(a) + function(b))/2 + s);
    printf("    /%f\n", b);
    printf("    | sqrt(4-x*x) = %f \n", sum);
    printf("    /%f\n", a);
}


double function(double x){
    double y = 4-x*x;
    return sqrtf(y);
}
