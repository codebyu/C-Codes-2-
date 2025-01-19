#include<stdio.h>
void factorial(int);
int main(){
    int num;
    printf("Enter the no. to find factorial\n");
    scanf("%d",&num);
    factorial(num);
   
    return 0;

}
void factorial(int num){
   int fact =1;
    for(int i=1;i<=num;i++){
        fact = fact * i;
    }
     printf("Factorial is : %d",fact);

}