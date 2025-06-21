#include<stdio.h>
int main(){
    int P,R,T;
    float I;
    printf("Welcome to the simple interest calculator !!\nEnter the Principal ,Rate and Time separated by comma(,)\n");
    scanf("%d,%d,%d",&P,&R,&T);
    I= (P*R*T)/100;
    printf("The Simple Interest for \nPrincipal Amount = Rs.%d \nRate = %d Percentage\nTime Period = %d Years \nIs Rs. %f",P,R,T,I);
    return 0;
}
