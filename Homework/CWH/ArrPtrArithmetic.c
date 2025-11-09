#include<stdio.h>
int main(){
    int arr[10]={2,4,6,8,10,12,14,16,18,20};
    int *ptr = arr;
    int a = *(ptr +2);
    printf("%d\n",a);
}