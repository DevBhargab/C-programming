#include <stdio.h>


int numberCheck (int a){
    if( a%2 !=0){
        printf("odd value is ");
    }else{
        printf("even value is ");
    }
    return a;
}
int main() {
        printf("enter value ");
        int ans ;
        scanf("%d",&ans);
        printf("%d", numberCheck(ans));

    return 0;
}