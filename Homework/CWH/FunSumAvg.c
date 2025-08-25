#include<stdio.h>
void funAvg(int *a,int *b,int *sum,int *avg){
    *sum=*a+*b;
    *avg=(*a+*b)/2;
}
int main(){
    int a =5;int b= 9;
    int sum,avg;
    funAvg(&a,&b,&sum,&avg);
    printf("Sum : %d\n",sum);
    printf("Avg : %d",avg);

}