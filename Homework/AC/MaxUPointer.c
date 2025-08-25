#include <stdio.h>
int main(){
    int a =0 ;int b=-4;
    int *ptra=&a; int *ptrb = &b;
    if(*ptra == *ptrb)
    printf("Equal ");
    else if(*ptra > *ptrb)
    printf("First is Big");
    else if(*ptra < *ptrb)
    printf("Second is Big");
}