#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int a=34; 
    int *ptr=&arr[0];
    int b=40; 
    int *ptr2=&arr[4];
    printf("%u\n",ptr);
    ptr++;
    printf("%u\n",ptr);
    ptr--;
    printf("%d\n",ptr);
    printf("%d\n",ptr2);
    printf("%d\n",ptr2-ptr);
    ptr2=arr; //&arr[0] = arr
    printf("%d\n",ptr==ptr2);
}