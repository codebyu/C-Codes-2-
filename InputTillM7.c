#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter number :");
        scanf("%d",&n);
        printf("%d\n",n);
    }while(n%7!=0);
    printf("Thank You !!");
}