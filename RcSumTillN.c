#include<stdio.h>
int SM=0;
int sum(int count){
    if(count ==0 ){
        return 0;
    }
    SM=SM + count;
    sum(count -1);
    return 0;
}
int main(){
    int n;
    printf("Enter the no. till which sum is wanted\n");
    scanf("%d",&n);
    sum(n);
    printf("Sum Result is %d",SM);
}