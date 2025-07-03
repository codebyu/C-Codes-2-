#include<stdio.h>
int main(){
    printf("%f",3.0+1);
    //This will be wrong if we write printf("%d",3.0+1); it will return 0 means no right calculation so float in operation with int or float gives the result as float
    return 0;
}