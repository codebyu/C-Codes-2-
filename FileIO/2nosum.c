#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Number.txt","r");
    int a,b;
    fscanf(fptr,"%d",&a);
    fscanf(fptr,"%d",&b);
    printf("%d %d",a,b);
    int sum =a+b;
    fclose(fptr);
    fptr= fopen("Number.txt","w");
    fprintf(fptr,"%d ",sum);
    fclose(fptr);
}