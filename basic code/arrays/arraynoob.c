#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int sub =1;
    for(int i =0; i<5;i++){
        printf ("%d ",arr[i]);
        sub -= arr[i];

    }
    printf ("\n");
    printf("%d", sub);
    printf ("\n");


    

}