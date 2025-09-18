#include <stdio.h>
int main(){
    int arr[5]={2,3,4,3,6};
    int p[5];
    p[0]=&arr[0];
    printf("%d wohho",p[2]);
}