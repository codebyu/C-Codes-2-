#include<stdio.h>
int main(){
    int arr[5]= {1,2,3,4};
    printf("Enter the number to be inserted at the end of the array \n");
    int size =sizeof(arr)/4;
 

    scanf("%d",&arr[size-1]);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
}