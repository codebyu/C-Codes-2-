#include<stdio.h>
int main(){
    FILE *fptr;
    fptr= fopen("Test.txt","r");
    printf("%c",fgetc(fptr));
    
    fptr= fopen("Test.txt","a");
    fputc('A',fptr);
}