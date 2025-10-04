#include<stdio.h>
int main(){
    int arr[10][2];

    for(int i=0;i<=9;i++){
        arr[i][0]=2*(i+1);
        arr[i][1]=3*(i+1);
        }
    for(int i=0;i<=9;i++){  
      
        printf("%d ",arr[i][0]);
        
        }
        printf("\n");
        for(int i=0;i<=9;i++){
            printf("%d ",arr[i][1]);
        }
    

    return 0;
}