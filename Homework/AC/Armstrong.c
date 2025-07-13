#include<stdio.h>
int main(){
    int n,c;
    printf("Enter the no. to check it is an armstrong no. or not \n");
    scanf("%d",&n);
    if(n>=0&&n<=9){
        c=1;
    }
    else if(n>9&&n<100){
        c=2;
    }
    else if(n>99&&n<1000){
        c=3;
    }
    else if(n>999&&n<10000){
        c=4;
    }
    else{
        printf("No. of digits in the given no. exceeded the maximum limit for this program ignore below result\n");
        return 0;
    }
    
    if(c==1||n==153||n==370||n==371||n==407||n==1634||n==8208||n==9474){
        printf("It is an armstrong number\n");
    }
    else{
        printf("It is not an armstrong number\n");
    }
}