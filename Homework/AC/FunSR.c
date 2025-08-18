#include<stdio.h>

int main(){
    printf("Enter the no. to find its square root up to 9,223,372,036,854,775,807:\n");
    long long n;
    scanf("%lld", &n);
    int view =1;
    for(long long i = 1;i*i<=n;i++){
        if(i*i==n){
            printf("The sq root of %lld is %lld",n,i);
            view =0;
        }
    }
    if(view){
        printf("No Perfect Square root ");
    }
     return 0;
    }
   
