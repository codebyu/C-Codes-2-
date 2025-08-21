#include<stdio.h>
int main(){ // x= *ptr
    int x;
    int *ptr;
    ptr = &x;
    *ptr = 1;
    printf("x is %d\n",x);
    printf("%d\n",*ptr);
    *ptr +=5;
    printf("%d\n",x);
printf("%d\n",*ptr);
//  *ptr++; dont use such otherwise address increased 😂😂
//  printf("%d\n",x);
// printf("%d\n",*ptr);
    (*ptr)++;
printf("%d\n",x);
printf("%d\n",*ptr);
 

}