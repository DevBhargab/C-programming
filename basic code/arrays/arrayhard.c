#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int sum = 0;
    for(int i = 0; i<5; i++){
        printf("%d ", a[i]);
        sum += a[i];
    }
    printf("\n");
    printf("%d", sum);
    printf("\n");
    return 0;
}