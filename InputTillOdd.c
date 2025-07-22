#include<stdio.h>
int main(){
    printf("Enter the no. i will not stop untill you enter an odd no.\n");
    for(int i = 1; ;i++){
        int n,check;
        scanf("%d",&n);
        check=n%2;
        if(check!=0){
            break;
            
        }
        printf("Enter Again\n");
        
    }
}