#include<stdio.h>
int fact(int n);
int main(){
    int n;
printf("Enter to find it's factorial\n");
scanf("%d",&n);
printf("Facorial Value : %d",fact(n));
return 0;
}
int fact(int n){
    if(n==1||n==0){
        return 1;
    }
   int factNm1= fact(n-1);
   int factN= n*factNm1;
   return factN;
}

