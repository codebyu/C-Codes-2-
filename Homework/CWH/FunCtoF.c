#include<stdio.h>
float ctoF(float c){
    return (9.0/5.0)*c+32;
}
int main(){
    printf("Enter temp in Celcius : ");
    float c;
    scanf("%f",&c);
    printf("%f degree celcius = %f fahrenheit",c,ctoF(c));
    return 0;
}