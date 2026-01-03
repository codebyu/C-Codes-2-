#include<stdio.h>

typedef struct complexNo{
    int real;
    int imaginary;
} com;

int main(){
    com c1 = { 5,20};
    com c2 = { 3,30};
    com *ptr1,*ptr2;
    ptr1=&c1; ptr2 = &c2;
    printf("Two Complex Numbers given below :\n%d + %di\n%d + %di\n",ptr1->real,ptr1->imaginary,ptr2->real,ptr2->imaginary);
    return 0;
}

