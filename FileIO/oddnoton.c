#include<stdio.h>
int main(){
    printf("Upto Which number you want the Odd Numbers \n");
    int d;
    scanf("%d",&d);
    FILE *fptr;
    fptr=fopen("OddNumbers.txt","w");
    for(int i=1;i<=d;i=i+2){
    fprintf(fptr,"%d ",i);
    }
    fclose(fptr);
    fptr=fopen("OddNumbers.txt","r");
    int ch;
    while(fscanf(fptr,"%d",&ch)==1){
        printf("%d ",ch); 
        
        
    }
    fclose(fptr);
}