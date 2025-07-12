#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. to check : ");
    scanf("%d",&n);
    printf("Result 1 if two digit no and 0 if not \nResult : %d",n>9&&n<100);
    return 0;
}