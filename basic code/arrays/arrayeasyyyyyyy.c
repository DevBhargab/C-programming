#include<stdio.h>
int main(){
    float arr[5]={100,2,4,50,5};
    float div =2;
    for(int i =0; i<5;i++){
        printf ("%d ",arr[i]);
        div /= arr[i];

    }
    printf ("\n");
    printf("%f", div);
    printf ("\n");


    

}