#include<stdio.h>
int main(){
    long long n;
    long long digits=0;
    printf("Enter the digit\n");
    scanf("%lld",&n);
    while(n>0){
        digits++;
        n=n/10;


    }
    printf("It has %lld digits",digits);
}