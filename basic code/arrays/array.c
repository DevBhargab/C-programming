#include<stdio.h>
int main(){
    // int a[5] = {1,2,3,4,5};
    // for(int i = 0; i<5; i++){
    //     printf("%d", a[i]);
    // }
    // return 0;
    // int a = 10;
    // int b = 20;
    // int c = 30;
    // int d = 40;
    // int e = 50;
    // int f = 60;
    // int g = 70;
    // int h = 80;
    // int i = 90;
    // int j = 100;
    int arr [] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (
        int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("%d",arr[3]);
    arr[3] = 10;
    printf("\n");
    printf("%d",arr[3]);
    return 0;
    
}

