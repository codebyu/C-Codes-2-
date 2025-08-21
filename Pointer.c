#include <stdio.h>
int main(){
    int age =22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d",_age);
    printf("\n%d",*ptr);
    printf("\n%p",ptr); 
    printf("\n%p\n",&age);
    printf("\n%p\n",&ptr);
    printf("\n%u\n",&ptr);
    int age2 = 5;  
    int* demo = &age2;
    printf("\n%d\n",*demo);
    printf("%p",demo);
    printf("\n%d",*(&age));
    printf("\n%d",*&age);

    
    
}