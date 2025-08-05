#include<stdio.h>
int pow(int a,int b){
    int ans;
    for(int i=1;i<=b;i++){
        a = a*a;
        
    }
    return a;
}

int main(){
    printf("Enter the base no.\n");
    int a;
    scanf("%d",&a);
    printf("What power of %d you want to find \n",a);
    int b;
    scanf("%d",&b);
    printf("%d to the power %d is %d",a,b,pow(a,b));
    return 0;
}