#include<stdio.h>
int main(){
    int arr[]= {2,4,6,8};
     int size = (sizeof(arr[]))/4;
    // 4-0 3-1 2-2 0
    int temp;
    for(int i=0;i<2;i++){

       temp = arr[size-i];
       arr[size-i]=arr[i];
       arr[i]= temp;
    }
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}