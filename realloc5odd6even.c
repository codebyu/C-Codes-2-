#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    printf("ODD NUMBERS : ");
    for(int i=0;i<5;i++){
        ptr[i]=2*i+1;
        printf("%d\t",ptr[i]);
    }
    printf("\nEVEN NUMBERS : ");
    realloc(ptr,6*sizeof(int));
    for(int i=0;i<6;i++){
        ptr[i]=2*i+2;
        printf("%d\t",ptr[i]);
    }
    free(ptr);

}