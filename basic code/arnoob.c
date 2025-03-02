#include<stdio.h>

void swap (int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int a = 5;
    int b = 10;
    swap(&a,&b);
   printf("a = %d\nb = %d\n",a,b);00000000000000000
} 0