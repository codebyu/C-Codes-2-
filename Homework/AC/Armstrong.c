#include<stdio.h>
int main(){
    int n,arm=0,r,d;
    printf("Enter the no to check\n");
    scanf("%d",&n);
    d=n;
    while(d>0){
        r=d%10;
        arm= (r*r*r)+ arm;
        d=d/10;
    }
    if(n==arm){
    printf("It is an Armstrong Number\n");
    } 
    else{
    printf("It is not an Armstrong Number\n");
    }
   

}