#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(6,sizeof(int));
    ptr[4]=5;
    printf("%d",ptr[7]);
    ptr=realloc(ptr,6);
    printf("%d",ptr[4]);
}