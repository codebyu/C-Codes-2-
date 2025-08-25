#include<stdio.h>
int main(){
    int a = 5;
    int *ptr =&a;
    int **pptr =&ptr;
    int ***ppptr=&pptr;
    int ****pppptr=&ppptr;
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",**pptr);
    printf("%d\n",***ppptr);
    printf("%d",****pppptr);
}