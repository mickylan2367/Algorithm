#include <stdio.h>
#include <math.h>

/*����..����ȕ��Ɋ֐����`�ł����...*/
// ��ϕ��֐�
// #define f(x) (sqrt(4-x*x)) 

double function(double);

void main(void){
    int k;
    double a, b, n, h, x, s, sum=0;

    printf("�ϕ���� A, B ����͂��Ă�������\n");
    printf("A= ? (B���傫���l��ݒ肵�Ă�������)\n");
    scanf("%lf", &a);
    printf("B= ? (A��菬�����l��ݒ肵�Ă�������)\n");
    scanf("%lf", &b);

    n = 50;       /*��Ԃ𕪊����鐔*/
    h = (b-a)/n; /*��ԕ�*/
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
