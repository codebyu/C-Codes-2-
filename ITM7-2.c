#include<stdio.h>
int main(){
    int n;
    do{
        printf("Enter the no.\n");
        scanf("%d",&n);
        if(n%7==0){
            break;
        }
        printf("Enter again\n");
    }while(1);
    printf("Thank YOU");
}