#include<stdio.h>
int main(){
    int aadhar[5];
   
    for(int i=0;i<5;i++){
        printf("Enter %dth element : ",i);
        scanf("%d",&aadhar[i]);
    }
     
    for(int i=0;i<5;i++){
        printf("%dth element is : %d\n",i,aadhar[i]);
    }
}