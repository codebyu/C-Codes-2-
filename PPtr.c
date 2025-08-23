#include<stdio.h>
int main(){
    int age = 22;
    int *ptr=&age;
    int **pptr=&ptr;
    printf("%d",age);
    printf("\n%p",ptr);
    printf("\n%p",pptr);
    printf("%d\n%d\n%d\n%d\n%d\n",age,ptr,pptr,*ptr,**pptr);
    
}