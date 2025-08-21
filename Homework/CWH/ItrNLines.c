#include<stdio.h>
void printLine(int n){
    for(int i =0;i<=n-1;i++){
        for(int j=1;j<=2*i+1;j++){
            printf("*");
        }
        if(i!=n-1)
        printf("\n");
        
    }
   
}
int main(){
    printf("Enter the no. of lines to print stars : ");
    int n;
    scanf("%d",&n);
    printLine(n);
    return 0; 
}