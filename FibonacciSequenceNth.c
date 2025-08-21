#include<stdio.h>
int fib(int n);
int main(){
    printf("Enter the specific term to see for fibonacci sequence\n");
    int n;
    scanf("%d",&n);
    
    printf("%d ",fib(n));
    
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
 } //for fib(5) = fib(4)+fib(3)
                              //for fib(4) = fib(3)+fib(2)
     return fibt;
 }

  
