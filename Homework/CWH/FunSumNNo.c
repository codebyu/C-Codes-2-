#include<stdio.h>
int calSum(int n){
    if(n==0){
        return 0;
    }
    return n+calSum(n-1);
}
int main(){
    printf("Enter the no. to find the sum till that no.\n");
    int n;
    scanf("%d",&n);
    printf("Sum Result : %d",calSum(n));
    return 0;
}