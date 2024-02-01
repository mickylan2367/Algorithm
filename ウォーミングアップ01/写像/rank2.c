
// 小さい値の方が順位が高い場合のアルゴリズム
#include <stdio.h>
#define Num 10
#define Max 36
#define Min -20
#define Bias 1-(Min)

// bias = 1-(-20) = 21
// min + bias = -20 + 21 = 1
// max + bias = 21 + 36 = 57

void main(void){
    int a[]={-3, 2, 3, -1, -2, -6, 1, -1, 1, 5};
    int i, juni[Max+Bias+1];

    for(i=Min+Bias;i<=Max+Bias;i++){
        juni[i] = 0;
    }

    for(i=0;i<Num;i++){
        juni[a[i]+Bias]++;
    }

    juni[0] = 1;
    for(i=Min+Bias;i<=Max+Bias;i++){
        juni[i] = juni[i] + juni[i-1];
    }

    printf(" score rank \n");
    for(i=0;i<Num;i++){
        printf("%6d%6d\n", a[i], juni[a[i] + Bias-1]);
    }
}

