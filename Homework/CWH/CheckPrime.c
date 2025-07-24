#include<stdio.h>
int main(){
    int n,checker=0;
    printf("Enter the no. to be checked\n");
    scanf("%d",&n);
    if(n==1||n==0){
        checker++;
    }
    for(int i=2;i<=n/2;i++){
        
        if(n%i==0){
            checker++;
            break;
        }
    
    }
    if(checker==1){
        printf("Not a Prime No.\n");
    }
    else{
        printf("Prime No.\n");
    }
}