#include<stdio.h>
int main(){
    int arr[]= {2,4,6,5,8,55,56,57,58};
     int size = (sizeof(arr)/4)-1;
     printf("size : %d",size);
    // 4-0 3-1 2-2 0
    int temp;
    for(int i=0;i<(size/2);i++){

       temp = arr[size-i];
       arr[size-i]=arr[i];
       arr[i]= temp;
    }
    for(int i=0;i<size+1;i++){
        printf("%d\t",arr[i]);
    }
}