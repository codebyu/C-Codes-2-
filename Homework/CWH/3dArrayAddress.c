#include<stdio.h>
int main(){
    int arr[1][2][3] = {2,4,6,8,10,12};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        printf("%u\t",&arr[0][i][j]);
    }
}
