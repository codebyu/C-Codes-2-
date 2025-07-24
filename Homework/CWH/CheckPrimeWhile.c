#include<stdio.h>
int main(){
    int n,c=1;
    printf("Enter the no. to check\n");
    scanf("%d",&n);
    int i = 2;
    while(i<=n/2){
        if(n%i==0){
            c=0;
            
            break;
        }
        i++;

        
    }
    if(c==0||n==0||n==1){
        printf("Not Prime\n");
    }
    else{
        printf("Prime");
    }

}