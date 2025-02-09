

#include <stdio.h>

int main() {
    
    int x = 10;
    int y = 5;
    int z = 117;
    
    if (x > y) {
        if (x > z) {
            printf("%d\n", x);  // Use %d to print integer
        }else {
            printf("%d",z);
        }
    }
    
    else if (y > x) {
        if (y > z) {
            printf("%d\n", y);  // Use %d to print integer
        }
    } else {
        printf("%d\n", z);      // Use %d to print integer
    }
    
    return 0;
}
