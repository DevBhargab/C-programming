#include <stdio.h>
int main() {
    int x = 10;
    int y = 51;
    int z = 7;
   if(x>y && x>z){
       printf("%d",x);
   }else if(y>x && y>z){
       printf("%d", y);
   }else {
       printf("%d",z);
   }
   
    return 0;
}
