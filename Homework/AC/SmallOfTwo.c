#include<stdio.h>
int main(){
    float a,b;
    printf("Enter first no and second no separated by a comma\n");
    scanf("%f,%f",&a,&b);
    (a>b) ? printf("Second no is small"): printf("First no is small") : printf("Equal");
    (a==b) ? printf(" ? Not Small Infact both no are equal"): printf(".");
}