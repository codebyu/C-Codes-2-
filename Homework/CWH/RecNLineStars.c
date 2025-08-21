#include<stdio.h>
int count =0;
int printStars(int n){
    if(n==0){
        return 0;
    }
   printStars(n-1);
     if(n!=1)
   printf("\n");
   for(int i=1;i<=2*n-1;i++){
    printf("*");

   }
   
   
   
   
}
int main(){
    printf("Enter :");
    int n; scanf("%d",&n);
    printStars(n);
}