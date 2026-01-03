#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("NewTest.txt","w");
    if(fptr==NULL)  printf("File doesn't exist\n");
    else fclose(fptr);
}