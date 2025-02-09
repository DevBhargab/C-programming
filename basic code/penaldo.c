#include <stdio.h>

int main() {
     //int sum=x/y;
int x=5;
int y=10;
int targetadd;
int targetsub;
int targetmultiply;
int targetdiv;
printf("enter sum \n");
scanf("%d",&targetadd);
printf("enter sub \n");
scanf("%d",&targetsub);
printf("enter multi\n");
scanf("%d",&targetmultiply);
printf("enter div\n");
scanf("%d",&targetdiv);
int sum = y+x;
int sum1 =y-x;
int sum2 =y*x;
int sum3 =y/x;
if (sum == targetadd){
printf("correct answer\n");
}else{
    printf("wrong answer\n");
}

 if(sum1==targetsub){
printf("correct answer\n");
}else{
    printf("wrong answer\n");
}
    if(sum2==targetmultiply){
printf("correct answer\n");
}else{
    printf("wrong answer\n");
}
    if(sum3==targetdiv){
printf("correct answer\n");
}else{
    printf("wrong answer \n");
}

    return 0;
}

