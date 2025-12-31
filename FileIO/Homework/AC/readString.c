#include<stdio.h>
#include<string.h>
int main(){
    FILE *fptr;
    fptr=fopen("string.c","r");
    char str1[100],str2[100];
    fscanf(fptr,"Name : %99[^N]",str1);
    fscanf(fptr,"Name : %99[^\n]",str2);
    printf("%s\n",str1); printf("%s\n",str2);
}