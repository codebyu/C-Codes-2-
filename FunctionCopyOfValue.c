#include<stdio.h>
void checkPrice(float n);
int main(){
    float n= 100.0;
    checkPrice(n);
    printf("but Value is %f",n);

}
void checkPrice(float n){
    n=n+(0.18*n);
    printf("Price is %f\n",n);
}
