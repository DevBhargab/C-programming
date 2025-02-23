#include<stdio.h>
void updateVal (int *a){
     *a = 50000;
}
int main (){
    int a = 5;
    printf("%d\n",a);
   updateVal(&a);
    printf("%d\n",a);
}