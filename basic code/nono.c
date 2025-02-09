#include <stdio.h>

int main() {
        int day ; 
    printf("enter the day: ");
    scanf("%d",&day);
    
    switch(day){
        case 1:
            printf("your day is : suryaday");
            break;
        case 2 :
            printf("your day is : monyday");
            break;
        case 3 : 
            printf("your day is : tusiday");
            break;
        case 4:
            printf("your day is : wetnessday");
            break;
        case 5:
            printf("your day is : thirdday");
            break;
        case 6:
            printf("your day is : fryday");
            break;
        case 7 :
            printf("your day is : sani day");
            break;
        default:4;
            printf("your day is not a day");
            break;
    }
// int 1= sunday;
// int 2= monday;
// int 3= tuesday;
// int 4= wednesday;
// int 5= thursday;
// int 6= friday;vs
// int 7= 
    return 0;
}
