#include<stdio.h>
int main(){
    int arr[]= {2,4,6,8,10};
    // 4-0 3-1 2-2 
    int temp;
    for(int i=0;i<=2;i++){

       temp = arr[4-i];
       arr[4-i]=arr[i];
       arr[i]= temp;
    }
    for(int i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
}