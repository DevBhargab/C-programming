#include<stdio.h>
void swap (int *c , int *d){
    int temp = *c;
    *c = *d;
    *d = temp;
}
int main (){
    int c = 5;
    int d = 10;
    swap(&c,&d);
   printf("c = %d\nd = %d\n",c,d);
}