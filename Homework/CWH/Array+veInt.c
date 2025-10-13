#include<stdio.h>
int main(){
    int arr[]={-1,-4,0,8,7,1,4,7,5,8,5};
    int count =0;
    for(int i=0;i<(sizeof(arr)/sizeof(int));i++){
        if(arr[i]>=0){
            count ++;
        }
     
    }
    printf("No. Of Positive Values in the array is %d",count);
}