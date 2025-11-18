#include<stdio.h>
#include<string.h>
void slice(char str[],int n,int m){
    int j=0;
    char newStr[100];int i=n;
    for(;i<=m;i++,j++){
        newStr[j]=str[i];
    }
    newStr[j]='\0'; 
    puts(newStr);
}
int main(){
    char str[100];
    printf("String Plz : ");
    fgets(str,100,stdin);
    printf("Starting index : ");
    int si; scanf("%d",&si);
    printf("Ending index : ");
    int li; scanf("%d",&li);
    slice(str,si,li);
    return 0;
}