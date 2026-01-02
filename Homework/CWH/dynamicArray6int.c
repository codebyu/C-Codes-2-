#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    arr=(int *)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<6;i++){
        printf("%d",arr[i]);
    }
    free(arr);
    arr=NULL;
}