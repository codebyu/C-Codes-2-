#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    arr=(int *)malloc(6*sizeof(int));
    arr[0]=1;
    arr[1]=2;
    arr[2]=8;
    arr[3]=9;
    arr[4]=10;
    arr[5]=90;
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
    free(arr);
    arr=NULL;
}