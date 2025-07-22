#include<stdio.h>
int main(){
    printf("Enter the no. to check\n");
    int n,j=0;;
    scanf("%d",&n);
    for(int i =2;i<=n/2;i++){
        if(n%i==0){
            j++;
        }
    }
        if(j>=2){
            printf("Not a prime no.");
        }
    else{
        printf("Prime NO.");
    }   
 }