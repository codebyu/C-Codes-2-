#include<stdio.h>
int main(){
    int arr[]={33,22,53,5363,4333,789789,0};
    int largest = arr[0];
    int size = sizeof(arr)/4;
   
//ARRAY KE SCOPE OF SIZEOF(ARR) GIVES THE ARRAY SIZE NOT ANY POINTER SIZE
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    printf("Largest :%d",largest);
    return 0;
}