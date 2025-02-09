#include <stdio.h>

int main() {
    // Write C code here
    char c ;
    printf("enter symbol");
    scanf("%c", &c);
    int a , b;
    printf("input test inputs");
    scanf("%d %d", &a,&b);
    switch(c){
        case '+' :
            printf("%d", a+b);
            break;
        case '-' :
            printf("%d", a-b);
            break;
        case '*' :
            printf("%d", a*b);
            break;
        case '/' :
            printf("%d", a/b);
            break;
        default :
            printf("not working");
            break;
    }

    return 0;
}
