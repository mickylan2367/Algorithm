#include <stdio.h>

void main(void){
    int a, n;
    while(
        printf("Number?\nif you finish this, please push ctrl z and enter\n"),scanf("%d", &n)!=EOF
    ){
        a = 2;
        while(n>=a*a){
            if(n%a==0){
                printf("%d*", a);
                n=n/a;
            }else{
                a++;
            }
        }
        printf("%d\n", n); /*どの数でも割り切れなかった素数がnに入っている*/
    }
}