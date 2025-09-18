#include<stdio.h>
int main(){
    int count =0;
    int arr[]= {5,7,6,8,4,1,2,6,7,9};
    int *last = &arr[9];
    int *first=&arr[0];
    int size = last - first+1; 
    for(int i = 0; i< size;i++){
        if((arr[i]%2)==0){
            continue;
        }
        else{
           count++;
        }
    }
    printf("No. of odd numbers in this array is %d ",count);
    printf("Size : %d",size);

}