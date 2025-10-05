#include<stdio.h>
int main(){
    int arr[5]={2,4,6,8,10};
    int *ptr = arr;
    int a = *(ptr +2);
    printf("%d\n",a);
}