#include<stdio.h>
int main(){
    printf("Enter the no to check it divisibility by 97 \n");
    int n;
    scanf("%d",&n);
    printf("Here 0 for divisible and any other no. for not divisible\n");
    printf("Result - %d\n",n%97);
    n%97==0 ? printf("Divisible\n") : printf("Not Divisible\n");

}