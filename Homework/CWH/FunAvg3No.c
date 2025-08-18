#include<stdio.h>
float avgFind(float a, float b, float c){
    return (a+b+c)/3;

}
float main(){
    printf("Enter the three no. separated by space\n");
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    printf("Avg of %f, %f and %f is %f",a,b,c,avgFind(a,b,c));
    return 0;
        }