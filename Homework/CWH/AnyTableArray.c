#include<stdio.h>
int main(){
    int arr[300][1000];
    int arr1[1000];
    int i=0;
    while(1){
        
        printf("Enter the numbers to find their table (To Stop Type 0) ");
        scanf("%d",&arr1[i]);
        
        if(arr1[i]==0){
            
            break;
        }
        i++;
    }
        

    
        for(int k=0;k<i;k++){
        for(int j=0;j<10;j++){
          arr[k][j]=arr1[k]*(j+1);
        }
    }
        for(int k=0;k<i;k++){
            for(int j=0;j<10;j++){
                printf("%d\t",arr[k][j]);
                
            }
            printf("\n");
        }
    }
    
