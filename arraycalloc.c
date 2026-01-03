#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    arr=(int *)calloc(5,sizeof(int));
    printf("Enter 5 number plzz\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d",arr,&arr[0]);
    printf("Numbers: ");
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
}