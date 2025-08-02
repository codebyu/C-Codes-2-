#include<stdio.h>
float CtoF(float c){
  float F= ((9*c)/5)+32;
  return F;
}
int main(){
    printf("Enter the temperature in Celcius\n");
    float c;
    scanf("%f",&c);
    printf("%f celcius is %f farenheit \n",c,CtoF(c));
    printf("ThankYou \n");
    return 0;
}