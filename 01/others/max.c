#include <stdio.h>

int main(void){
    int a, b, c;
    printf("�O�̐����̍ő�l�����߂܂�");
    printf("a�̒l�F"); scanf("%d", &a);
    printf("b�̒l�F"); scanf("%d", &b);
    printf("c�̒l�F"); scanf("%d", &c);

    int max = 1;
    if(b>max)max=b;
    if(c>max)max=c;

    printf("�ő�l��%d�ł�\n", max);
    return 0;
}