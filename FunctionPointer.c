#include<stdio.h>

int spa(int a,int b,int *sum,int *product,int *avg){
    int *sum= a+b;
    int *product = a*b;
    int *avg=(a+b)/2;
}

int main(){
    printf("Enter the first no.\n");
    int a; scanf("%d",&a);
    printf("Enter the second no.\n");
    int b; scanf("%d",&b);
   int sum=0; int product = 1;int avg=0;
int *sum=&sum; int* product =&product; int* avg=&avg;
   spa(a,b,&sum,&product,&avg);
    printf("Sum : %d\nProduct :%d\nAverage :%d\n",*sum,*product,*avg);
    return 0;
}