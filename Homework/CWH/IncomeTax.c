#include<stdio.h>
int main(){
    float amt,tax;
    printf("Enter the amount to calculate the income tax \nRs.");
    scanf("%f",&amt);
    if(amt>=250000&&amt<=500000){
        tax=amt*(5.0/100);
        printf("Tax 5 %% implemented which is Rs.%f",tax);
    }
    else if(amt>500000&&amt<=1000000){
        tax=amt*0.1;
        printf("Tax 10 %% implemented which is Rs.%f",tax);
    }
    else if(amt>1000000){
        tax=amt*0.2;
        printf("Tax 20 %% implemented which is Rs.%f",tax);
    }
    else if(amt>0&&amt<250000){
        printf("NO Tax !!");
    }
    return 0;
}