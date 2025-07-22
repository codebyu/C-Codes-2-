#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. for reverse table\n");
    scanf("%d",&n);
    printf("Reverse Table Below :");
    for(int i = 10;i>=1;i--){
        printf("%d\n",n*i);
    }
}