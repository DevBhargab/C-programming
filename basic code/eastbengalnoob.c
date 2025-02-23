#include<stdio.h>
void updateVal (int *a,int *b){
     *a = 50000;
    *b = 100000;
}
int main (){
    int a = 5;
    int b = 11;
    printf("%d\n",a);
   updateVal(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    
    printf("%d\n",b);
    printf("%d\n",a+b);
}