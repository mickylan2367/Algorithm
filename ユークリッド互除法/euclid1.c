#include <stdio.h>

void main(void){
    int a, b, m, n, k;
    printf("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    m=a;
    n=b;
    do{
        k= m%n;
        m=n;
        n=k;
    }while(k!=0);

    printf("Å‘åŒö–ñ”%d\n", m);
}