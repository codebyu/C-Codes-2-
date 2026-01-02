#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    arr=(int *)malloc(10*sizeof(int));
    for(int i=0;i<10;i++){
        arr[i]=7*(i+1);
    }
    printf("table of 7 is \n");
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    realloc(arr,15*sizeof(int));
    for(int i=10;i<15;i++){
        arr[i]=7*(i+1);
    }
    printf("\nNow 7 Table is \n");
    for(int i=0;i<15;i++){
        printf("%d\n",arr[i]);
    }
}