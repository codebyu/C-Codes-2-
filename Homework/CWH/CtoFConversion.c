#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the temperature in degree celcius to convert it into the farenheit scale \n");
    scanf("%f",&c);
    f=(5*c/9)+32;
    printf("%f degree celcius = %f farenheit ",c,f);
    return 0;
}