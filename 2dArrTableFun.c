#include<stdio.h>
int table(int arr[][10],int num1, int num2){
    for(int i=0;i<=9;i++){
         arr[0][i]= num1*(i+1);
         arr[1][i]=num2*(i+1);
    }

}

int main(){
    int tableOf[2][10];
        table(tableOf,2,3);
        for(int i=0;i<=9;i++){
            printf("%d ",tableOf[0][i]);
        }
        printf("\n");
        for(int i=0;i<=9;i++){
            printf("%d ",tableOf[1][i]);
        }
    return 0;
}