#include<stdio.h>
int square(int n);
int _square(int *n);
int main(){
    int n = 5;
     printf("Square : %d\n",square(n));
     printf("Number : %d\n",n);
     printf("Square : %d\n",_square(&n));
     printf("Number : %d\n",n);
      printf("Square : %d\n",_square(&n));
     printf("Number : %d\n",n);
      printf("Square : %d\n",_square(&n));
     printf("Number : %d\n",n);
      printf("Square : %d\n",_square(&n));
     printf("Number : %d\n",n);
      printf("Square : %d\n",_square(&n));
     printf("Number : %d\n",n);
     return 0;
}
int square (int n){
    n=n*n;
    return n;
}
int _square(int *n){
      *n=(*n)*(*n);
      return *n;
}
