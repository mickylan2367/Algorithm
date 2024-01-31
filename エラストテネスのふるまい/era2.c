#include <stdio.h>
#include <math.h>

// #define NUM 1000
void main(void){
    int num;
    printf("”š‚ğ“ü—Í‚µ‚Ä‚Ë\n");
    scanf("%d", &num);
    int prime[num/2 +1];
    int i, n, m=0, Limit;

    for(n=2;n<=num;n++){
        Limit = (int)sqrt((double)n);
        for(i=Limit;i>1;i--){
            if(n%i == 0)break;
        }

        if(i==1){
            prime[m++]=n;
        }
    }

    printf("\n ‹‚ß‚ç‚ê‚½‘f”\n");
    for(i=0;i<m;i++) printf("%5d", prime[i]);
    printf("\n");
}