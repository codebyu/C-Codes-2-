#include<stdio.h>
int main(){
    printf("Enter the natural no. to print it's sum upto that no.\n");
    int n,sum=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The Sum Result is %d\n",sum);
    printf("%d This is i\n",i);
    int j=n;
    printf("Reverse order of the numbers\n");
    do{
        
        printf("%d\n",j);
        j--;
    }while(j>=1);
}