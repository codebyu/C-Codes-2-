#include<stdio.h>
int funOND(int n);
int main(){
    printf("Enter the no. to find it's sum of digits only upto 2,147,483,647\n");
    int n; scanf("%d",&n);
    printf("Sum of digits of no. %d is %d",n,funOND(n));
    return 0;
}

int funOND(int n){
   int sum=0;
    while(n!=0){
        int p;
        p=n % 10;
        sum+=p;
        n/=10;
        
    }
    return sum;
}