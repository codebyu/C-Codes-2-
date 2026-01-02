#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    arr=(int *)calloc(6,sizeof(int));
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }
    free(arr);
}