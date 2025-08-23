#include<stdio.h>
int print(int *n){
    printf("%u\n",n);
}

int main(){
    int n=10;
    printf("%d\n",&n);
    print(&n);
}