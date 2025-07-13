#include<stdio.h>
#include <limits.h>
int main(){
    long n;
    printf("Enter the no. to check if it is natural no. or not\n");
    scanf("%ld",&n);
    if(n>0){
        printf("Natural No.\n");
    }
    else{
        printf("Not a Natural No.\n");
    }
    printf("int min: %d, int max: %d\n", INT_MIN, INT_MAX);
    return 0;
    

}