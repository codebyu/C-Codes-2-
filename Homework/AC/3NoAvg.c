#include<stdio.h>
int main(){ 
    float a,b,c;
    printf("Enter the three no separated by space\n");
    scanf("%f %f %f",&a,&b,&c);
    printf("The Avg of %f , %f and %f is %f \n",a,b,c,(a+b+c)/3);
}