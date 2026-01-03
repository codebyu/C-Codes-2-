#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    printf("Enter How many Floats Block Do You Want : ");
    int x;
    scanf("%d",&x);
    ptr=(float*)calloc(x,sizeof(float));
    for(int i=1;i<=x;i++){
    printf("Successfully allocated %d\n",ptr[i-1]);
    }
    free(ptr);
    ptr=(float *)calloc(2,sizeof(float));
    printf("%d--%d--",ptr[0],ptr[1]);
    free(ptr);

}