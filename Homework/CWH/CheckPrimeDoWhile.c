#include<stdio.h>
int main(){
    int m,c=1;
    printf("Enter the no. to be check\n");
    scanf("%d",&m);
    int i=2;
    do{
        if(m%i==0){
            c=0;
            break;
        }
        i++;
    }while(i<=m/2);
    if((c==0||m==1||m==0)&&m!=2){
        printf("Not Prime");
    
    } else {

        printf("Prime");
    }

}