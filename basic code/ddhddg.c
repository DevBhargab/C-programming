
#include <stdio.h>

int add(int a,int b){
    return a+b;
}
int sub(int c,int d){
   return c-d;
   
}
int multi(int e,int f){
    return e*f;
}
int divi(int g,int h){
   return g/h;
}
int main(){
    int addition =add(5,4);
    int substraction =sub(11,9);
    int multiplication=multi(5,4);
    int divis=divi(3,1);
    printf("%d\n",addition);
    printf("%d\n",substraction);
    printf("%d\n",multiplication);
    printf("%d\n",divis);
    
    return 0;
