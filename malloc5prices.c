#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr=(float *)malloc(5*sizeof(float));
    ptr[0]=123.43;
    ptr[1]=23.23;
    ptr[2]=23122.33;
    ptr[3]=4533;
    ptr[4]=933.3;
    for(int i=0;i<5;i++){
        printf("%f ",ptr[i]);
    }
    printf("%p\n",&ptr[0]);
    printf("\n%p\n",&ptr[3]);
    printf("%p",&ptr[4]);

}