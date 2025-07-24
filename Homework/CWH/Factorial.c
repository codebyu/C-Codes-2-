#include<stdio.h>
int main(){
    printf("Enter the no.(upto 13) to find it's Factorial\n");
    int n,fact=0;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        fact = fact *i;
    }
    printf("The factorial of the %d is %d",n,fact);

}