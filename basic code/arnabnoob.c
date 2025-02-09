#include <stdio.h>

int main() {
    int a=1;
    int b=2;
    int c=3;
    int d=4;
    
    int sum1 = a+c;
   int sum2= b+d;
    if(sum1 %2 !=0){
        sum1;
    }if(sum2 %2==0){
        sum2;
    }
    
    if(sum1>sum2){
        printf("%d",sum1);
    }else {
        printf("%d",sum2);
    }

    return 0;
}
