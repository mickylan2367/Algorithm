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
        printf("%d\n", n); /*‚Ç‚Ì”‚Å‚àŠ„‚èØ‚ê‚È‚©‚Á‚½‘f”‚ªn‚É“ü‚Á‚Ä‚¢‚é*/
    }
}