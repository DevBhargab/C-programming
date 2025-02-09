#include <stdio.h>

int main() {
    float celcius;
    printf("enter the value of celcius:\n");
    scanf("%f",&celcius);
    printf("the value celcius in farenhite is:");
    printf("%f\n",(celcius*9/5)+32);
    float farenhite;
    printf("enter the value of farenhite:\n");
   scanf("%f",&farenhite);
   printf("the value of farenhite in celcius is:");
   printf("%f\n",(farenhite - 32) * 5 / 9);

    return 0;
}   
