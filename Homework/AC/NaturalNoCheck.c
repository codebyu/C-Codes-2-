#include<stdio.h>
#include <limits.h>
int main(){
    long long n;
    printf("Enter the no. to check if it is natural no. or not\n");
    scanf("%lld",&n);
    if(n>0){
        printf("Natural No.\n");
    }
    else{
        printf("Not a Natural No.\n");
    }
    printf("long min: %lld, long max: %lld\n", LONG_LONG_MIN, LONG_LONG_MAX);
    // // usually in our windows int and long have same range but in 64 bit linux they usually long has high range 
    // if we want such high range in windows usually we have to use long long
    return 0;
    

}
