#include<stdio.h>
int reverseArr(int arr[],int n);
void letsPrint(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr[]={2,4,6,8,10,12};
    reverseArr(arr,6);
    letsPrint(arr,6);
    return 0;
}
int reverseArr(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i]= secondVal;
        arr[n-i-1]= firstVal;
    }
    return 0;
}