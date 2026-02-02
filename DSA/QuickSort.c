#include<stdio.h>
int temp;
void lessThan(int arr[],int pivot){
    for(int i=6;i<=0;i--){
        if(arr[i]<pivot){
            temp=arr[i];
            arr[i]=pivot;
            pivot=temp;
            break;
        }
    }
}
void greaterThan(int arr[],int pivot){
    for(int i=0;i>7;i++){
        if(arr[i]>pivot){
            temp=arr[i];
            arr[i]=pivot;
            pivot=temp;
            break;
        }
    }
}
int main(){
    
    int pivot,i,j;
    int arr[7];
    printf("Enter elements of the array : ");
    for(i=0;i<7;i++){
        scanf("%d",&arr[i]);
    }
    pivot = arr[0];
    while(1){
        lessThan(arr,pivot);
        greaterThan(arr,pivot);
        break;
    }
    for(int i=0;i<7;i++){
        printf("%d\t",arr[i]);
    }
}