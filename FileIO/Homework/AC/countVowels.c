#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("string1.txt","r");
    char str[100];
    fscanf(fptr,"%99[^\n]",str);
    printf("%s",str);
    int count =0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
            str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')    
            count++;
    }
    fclose(fptr);
    fptr=fopen("string1.txt","w");

    fprintf(fptr,"No. Of Vowels : %d",count);
    fclose(fptr);
}