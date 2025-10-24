#include<stdio.h>
int main(){
    int arr[2][2][3]={
                        {{1,2,3},{4,5,8}},
                        {{7,8,5},{6,8,10}}
    };
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<3;k++){
                printf("Address of %d is %u\t",arr[i][j][k],&arr[i][j][k]);
            }
            printf("\n");
        }
    }

}
