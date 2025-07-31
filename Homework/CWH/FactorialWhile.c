#include<stdio.h>
int main(){
    printf("Enter the no.\n");
   
    int n,fact=1,i=1;
     scanf("%d",&n);
    while(i<=n){
        fact =fact *i;
        i++;
    }
    printf("%d\n",fact);
}