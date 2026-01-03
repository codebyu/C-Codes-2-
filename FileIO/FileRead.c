#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Test.txt","r");
    char str;
    fscanf(fptr,"%c",&str);
    
    printf("%c",str);fscanf(fptr,"%c",&str);
    
    printf("%c",str);fscanf(fptr,"%c",&str);
    
    printf("%c",str);fscanf(fptr,"%c",&str);
    
    printf("%c",str);fscanf(fptr,"%c",&str);
    
    printf("%c",str);
    fscanf(fptr,"%c",&str);
    
    printf("%c",str);fscanf(fptr,"%c",&str);
    
    printf("%c",str);
    fclose(fptr);
}