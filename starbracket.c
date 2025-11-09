#include<stdio.h>
int main(){
    int arr[]= {1,2,3,4,5};
    printf("%d\n",*(arr+2)); // arr[2] is same as *(arr+2) or say [i] is same as (arr+i) 😊
    printf("%d\n",*(arr+5));
}