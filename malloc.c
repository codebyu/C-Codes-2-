#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)malloc(4*sizeof(int));
    ptr[0]=1;
    ptr[1]=5;
    ptr[2]=7;
    ptr[3]=3;
    for(int i=0;i<4;i++)
        printf("%d ",ptr[i]);
    

}