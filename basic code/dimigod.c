include <stdio.h>

float celcius(float a){
    return (a - 32) * 5 / 9; 
}float farenheit (float b){
     return (b * 9 / 5) + 32;
}
int main (){
    printf("hello\n");
    float ans ; scanf("%f",&ans);
    // printf("%f",ans);

    
    printf("%f\n",celcius(ans) );
    printf("%f\n",farenheit(ans) );
}
