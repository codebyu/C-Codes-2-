#include<stdio.h>
int main(){
    FILE *fptr,*fptr2;
    fptr=fopen("char.txt","w");
    char str[100]="Hello MY Dear Friends \n";
    int i=0;
    while(str[i]!='\n'){
        fputc(str[i],fptr);
        i++;
    }
    fclose(fptr);
    fptr=fopen("char.txt","r");
    fptr2=fopen("char2.txt","w");
    int ch;
    while((ch=fgetc(fptr))!=EOF){
    fputc(ch,fptr2);
    }
    fputc('\n',fptr2);
    fclose(fptr);
    fptr=fopen("char.txt","r");
    int ch2;
    while((ch2=fgetc(fptr))!=EOF){
        fputc(ch2,fptr2);
    }
    fclose(fptr);
    fclose(fptr2);

}