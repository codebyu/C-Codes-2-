#include<stdio.h>
void printAdd(int n);
int main(){
    int a=20;
    printf("Address before calling function : %d\n",&a);
    printAdd(a);

}
void printAdd(int n){
    printf("Now Address is %d",&n);
}