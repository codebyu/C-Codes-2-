#include<stdio.h>
#include<math.h>
int main(){
    printf("Enter the no. to find it's Square\n");
    int n;
    scanf("%d",&n);
    double c  = pow(n,2); //double se int me convert hone par thodi problem aati hai implicitely 
    int d = c;             
    printf("Squaring result : %d",d);
    return 0;
}