#include <stdio.h>

void main(void){
    int a, b, m, n;
    printf("２つの整数を入力してください\n" );
    printf("a=");
    scanf("%d", &a); /*scanfの出力は末尾に改行コード\nが入るよ*/
    printf("b=");
    scanf("%d", &b);

    m=a;
    n=b;
    while(m!=n){
        if(m>n){
            m=m-n;
        }else{
            n=n-m;
        }
    }

    printf("最大公約数=%d\n", m);
}