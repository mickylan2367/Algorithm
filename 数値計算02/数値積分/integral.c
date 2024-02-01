#include <stdio.h>
#include <math.h>

/*‚¦‚¦..‚±‚ñ‚È•—‚ÉŠÖ”‚ğ’è‹`‚Å‚«‚é‚ñ‚¾...*/
// ”íÏ•ªŠÖ”
// #define f(x) (sqrt(4-x*x)) 

double function(double);

void main(void){
    int k;
    double a, b, n, h, x, s, sum=0;

    printf("Ï•ª‹æŠÔ A, B ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    printf("A= ? (B‚æ‚è‘å‚«‚¢’l‚ğİ’è‚µ‚Ä‚­‚¾‚³‚¢)\n");
    scanf("%lf", &a);
    printf("B= ? (A‚æ‚è¬‚³‚¢’l‚ğİ’è‚µ‚Ä‚­‚¾‚³‚¢)\n");
    scanf("%lf", &b);

    n = 50;       /*‹æŠÔ‚ğ•ªŠ„‚·‚é”*/
    h = (b-a)/n; /*‹æŠÔ•*/
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
