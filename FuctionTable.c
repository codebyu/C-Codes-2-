#include<stdio.h>
void printTable(int n);
int main(){
    int n;
    printf("Enter the no. to print it's Table : ");
    scanf("%d",&n);
    printTable(n);
    return 0;
}
    void printTable(int n){
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
    }