#include <stdio.h>
int med3(int a, int b, int c){
    if(a >= b){
        if(b >= c){
            return b;
        }else if( a<= c){
            return a;
        }else{
            return c;
        }
    }else if(a>c){
        return a;
    }else if(b>c){
        return c;
    }else{
        return b;
    }
}


int main(void){
    int a, b, c;
    printf("3�̐����̒����l�����߂܂�");
    printf("a�̒l"); scanf("%d", &a);
    printf("b�̒l"); scanf("%d", &b);
    printf("c�̒l"); scanf("%d", &c);

    printf("�����l��%d�ł��B\n", med3(a, b, c));
    return 0;
}