#include <stdio.h>

void main(void){
    int a, b, m, n;
    printf("�Q�̐�������͂��Ă�������\n" );
    printf("a=");
    scanf("%d", &a); /*scanf�̏o�͖͂����ɉ��s�R�[�h\n�������*/
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

    printf("�ő����=%d\n", m);
}