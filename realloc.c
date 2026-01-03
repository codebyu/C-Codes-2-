#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    printf("Enter number(5) : ");
    printf("Enter number(8) : ");
    for(int i=0;i<8;i++){
        scanf("%d",&ptr[i]);
    }

    for(int i=0;i<8;i++){
        printf("%d",ptr[i]);
    }
}