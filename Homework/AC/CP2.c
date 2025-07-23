#include<stdio.h>
int main(){
    printf("Enter the no to check");
    int n,c=0;
    scanf("%d",&n);
    if(n==1||n==0){
        c+=3;
    }
   
    for(int i = 1;i<=n;i++){
        if(n%i==0){
            c++;
        }
        
    }
    if(n==2){

    }
        if(c>2){
            printf("NOt prime");
        }
        else{
            printf("prime");
        }
    }

