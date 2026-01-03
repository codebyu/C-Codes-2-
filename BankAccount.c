#include<string.h>
#include<stdio.h>
typedef struct BankAccountInfo{
    char name[100];
    long long accNo;
    char IFSC[11];
} Info;

int main(){
    Info u1;
    printf("Enter Bank Account Information : \n");
    printf("Enter Customer Name : ");
    fgets(u1.name,100,stdin);
    printf("Bank Account Number : ");
    scanf("%lld",&u1.accNo);
    printf("IFS Code : ");
    scanf("%s",u1.IFSC);
    printf("Here is the Information Entered by the user : \n");
    printf("Customer Name : ");
    printf("%s",u1.name);
    printf("Bank Account Number : %lld\nIFS Code : %s",u1.accNo,u1.IFSC);
    return 0;

}
