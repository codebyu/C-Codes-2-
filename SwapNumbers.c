#include<stdio.h>
int swap(int *a,int *b);
int main(){
    printf("Enter the first number : ");
    int a;
    scanf("%d",&a);
    printf("Enter the second number : ");
    int b;
    scanf("%d",&b);
    
    printf("Let's Swap them .. \n");
    
    swap(&a,&b);
     printf("Swapped \n");
     printf("First Number : %d",a);
     printf("\nSecond Number : %d",b);


}
int swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b=temp;
}