#include<stdio.h>
#include<math.h>
int main(){
    int n,p;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("What power of %d you want to find \n",n);
    scanf("%d",&p);
    double power = pow(n,p);
    printf("The %d th power of %d is %lf\n",p,n,power);
}