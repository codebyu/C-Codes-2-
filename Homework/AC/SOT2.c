#include<stdio.h>
int main(){
    float a,b;
    printf("Enter first and second no. separated by comma\n");
    scanf("%f,%f",&a,&b);
    printf("1 shows first no is greater and b means second no is greater\n");
    printf("%d\n",a<b);
    printf("If below result is 1 then above result does not matter\n") ;
    printf("Equality Check - %d",a==b);
}