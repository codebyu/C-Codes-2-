#include<stdio.h>
int pow(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
<<<<<<< HEAD
        ans = ans*a;
=======
        ans = ans *a;
        

>>>>>>> 88ed98caf731839769f1c5c7a8c38f5348f3370c
        
    }
    return ans;
}

int main(){
    printf("Enter the base no.\n");
    int a;
    scanf("%d",&a);
    printf("What power of %d you want to find \n",a);
    int b;
    scanf("%d",&b);
    printf("%d to the power %d is %d\n",a,b,pow(a,b));
    return 0;
}