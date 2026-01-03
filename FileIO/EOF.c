#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("Test.txt","r");
    int ch;
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }

    return 0;
}