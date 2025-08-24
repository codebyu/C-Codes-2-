#include<stdio.h>

int spa(int a,int b,int *s,int *p,float *av){
     *s= a+b;
     *p= a*b;
     *av=(a+b)/2.0;
}
//call by reference will change the values and return 3 values from the function isn't it amazing??????
int main(){
    printf("Enter the first no.\n");
    int a; scanf("%d",&a);
    printf("Enter the second no.\n");
    int b; scanf("%d",&b);
   int sum ,product; float avg;
   spa(a,b,&sum,&product,&avg);
    printf("Sum : %d\nProduct :%d\nAverage :%f\n",sum,product,avg);
    return 0;
}