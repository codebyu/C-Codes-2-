#include<stdio.h>
int change(int *ptr);

int main(){
    int a=5;
    int *ptr = &a;
    printf("Earlier Value : %d\n",a);
    change(&a);
    printf("Now Value :%d\n",a);
}
int change(int *ptr){
    (*ptr) *=10;
}