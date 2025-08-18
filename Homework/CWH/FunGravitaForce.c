#include<stdio.h>
#define g 9.8
float gF(float m){
    return m*g;
}
int main(){
    printf("Enter the mass of the body (in Kg): ");
    float m;
    scanf("%f",&m);
    printf("Gravitation Force By Earth : %f Kg-m/(s*s)",gF(m));
}