#include<stdio.h>
int printTable(int n);
int main(){
    int n;
    printf("Enter the no. to print it's Table : ");
    scanf("%d",&n);
    printTable(n);
    printTable(n+1);
    return 0;
}
    int printTable(int n){
    for(int i=1;;i++){
        printf("%d\n",n*i);
    }
    }