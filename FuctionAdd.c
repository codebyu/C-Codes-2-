#include<stdio.h>
int addition(int a , int b){ // a and b are parameters 
    return a + b;
}
int main(){
    int x,y;
    printf("Enter first no. : ");
    scanf("%d",&x);
    printf("Enter Second no. : ");
    scanf("%d",&y);
    int c = addition(x,y); // x and y are arguments 
    printf("Addition Result : %d",c);
    // Remember the values that are used during function definitions are called parameters
    // Whereas the values that are used in fuction calling are called arguments 
    // a small trick PD - Parameters Defination 
    // and          AC - Arguments Calling 
    
}