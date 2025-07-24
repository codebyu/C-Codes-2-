#include<stdio.h>
int main(){
    printf("Enter the range to find prime no. in that range ex.lower limit,upper limit\n");
    int l,u,c=1;
    scanf("%d,%d",&l,&u);
    for(int i=l;i<=u;i++){
        c=1;
        for(int j=2;j<=i/2;j++){
            
            if(i%j==0){
               c=0;
               break;
            }
           
        }
        

             
        if(i!=1&&i!=0)
            if(c==1){
                printf("Prime No. is %d\n",i);

    
            }
        }
    }
