#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("int.c","r");
    int x;
    fscanf(fptr,"%d",&x);
    x=2*x;
    fclose(fptr);
    fptr=fopen("int.c","w");
    fprintf(fptr,"%d",x);
    fclose(fptr);
}