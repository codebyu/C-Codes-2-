#include<stdio.h>

int sum(int count){
    if(count ==0 ){   
        return 0;
    }
    
    return count+ sum(count-1);
}
int main(){
    
    int n;
    printf("Enter the no. till which sum is wanted\n");
    scanf("%d",&n);
   sum(n);
    printf("Sum Result is %d",sum(n));
    return 0;
}