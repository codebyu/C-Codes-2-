#include<stdio.h>
int main(){
    int m,c=1;
    printf("Enter the no. to be check\n");
    scanf("%d",&m);
    int i=1;
    do{
        if(m%i==0){
            c++;
            
        }
        i++;
    }while(i<=m/2);
    if(c>2||m==1||m==0){
        printf("Not Prime");
    
    } else {

        printf("Prime");
    }

}