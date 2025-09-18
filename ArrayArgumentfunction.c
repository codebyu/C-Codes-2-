#include<stdio.h>
void printNumbers(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arm[]={1,2,3,4,5,6,7,8,9,20};
    printNumbers(&arm[0],10);
    return 0;
}