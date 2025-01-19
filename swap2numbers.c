#include<stdio.h>
void swap(int *a, int *b);

int main(){
    int x = 1 ,y = 4;
  
    swap(&x,&y);
      printf("x : %d and y : %d\n",x,y);
      return 0;
}

    swap(int *a,int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("x : %d and y : %d\n",*a,*b);
}
