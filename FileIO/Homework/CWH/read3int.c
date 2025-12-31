#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("3int.txt","w");
    fprintf(fptr,"%d %d %d",2,4,5);
    fclose(fptr);
    fptr=fopen("3int.txt","r");
    int a,b,c;
    fscanf(fptr,"%d%d%d",&a,&b,&b);
    printf("%d %d %d --",a,b,c);
    fclose(fptr);
}