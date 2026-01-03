#include<stdio.h>
int main(){
    int arr[2][3] ={{2,4,6},
                    {3,6,9}}; // kitne array banege vo rows and kitne elements har array me aaenge vo coloumns
                    printf("Here is 2d array 😊\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",arr[i][j]);
        }
        
        printf("\n");
    }
}