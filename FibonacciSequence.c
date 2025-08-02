#include<stdio.h>
int fib(int n);
int main(){
    printf("Enter the terms to see for fibonacci sequence\n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("%d ",fib(i));
    }
 return 0;
}
int fib(int n){ 
    int fibt;
  if(n==0){
    fibt=0;
  }
  else if(n==1){
       fibt =1;
  }
 else{
    fibt = fib(n-1)+fib(n-2);
 }
 return fibt;
  
}