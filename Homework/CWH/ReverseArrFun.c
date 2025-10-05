#include<stdio.h>
int reverseArr(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int fval=arr[i];
        int sval=arr[n-i-1];
        arr[i]=sval;
        arr[n-i-1]=fval;
    }
}
int main(){
    int arr[6]= {2,4,6,8,10,12};
    reverseArr(arr,6);
    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }

}