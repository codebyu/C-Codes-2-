#include<stdio.h>
int main(){
    int d,s;
    printf("Enter the day no. like 1 for monday\n");
    scanf("%d",&d);
    printf("Enter 1 if it is snowing and 0 If it is Raining\n");
    scanf("%d",&s);
    printf("If It's Sunday and snowing then Result is 1 othewise 0\nResult(SS) : %d\n",d==7&&s==1);
    printf("If It's Monday and Raining then Result is 1 otherwise 0\nResult(MR) : %d\n",d==1&&s==0);
    return 0;
}