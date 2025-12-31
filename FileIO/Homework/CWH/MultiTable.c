#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Table.txt","w");
    int n;
    printf("Enter Number to print it Table : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        fprintf(fptr,"%d * %d = %d\n",n,i,n*i);

    }
    fclose(fptr);
}