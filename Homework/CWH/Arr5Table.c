#include<stdio.h>
int main(){
    
    printf("How much size of array(means till how much table) do you want : ");
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter a no. to print its table : ");
    int n ;
    scanf("%d",&n);
    for(int i=0;i<size;i++){
        arr[i]=n*(i+1);
        printf("%d \n",arr[i]);
        }
}