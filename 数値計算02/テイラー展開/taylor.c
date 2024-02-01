#include <stdio.h>
#include <math.h>

double myexp(double);

void main(void){
    double x;
    printf("     x    myexp(x)     exp(x)\n");
    for(x=0;x<=40;x+=10){
        // x�̒l��10���ߎ�����B
        printf("%5.1f %14.6g %14.6g\n", x, myexp(x), exp(x));
    }
}

double myexp(double x){
    double EPS = 1e-08;
    double s=1.0;
    double e=1.0, d;
    int k;

    for(k=1;k<=200;k++){
        d=s;
        /*
            ������...�l���Ă݂�΁A�K����v�Z����
            �R���s���[�^�Ōv�Z���邱�Ƃ��l����ƌ��\�y��..
        */
        e = e*x/k; 
        s = s+e;
        if(fabs(s-d)<EPS*fabs(d)) return s; /*�ł��؂�덷*/
    }
    return 0.0; /*�������Ȃ���.�ő��200���v�Z����B*/

}