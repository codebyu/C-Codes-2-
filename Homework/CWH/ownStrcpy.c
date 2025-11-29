#include<stdio.h>
void strcpy(char str1[],char str2[]){
   int i =0;
    while(str2[i] !='\0'){
        str1[i]=str2[i];
        i++;
    }
    str1[i]='\0';
    
}

int main(){
    
    char str1[100],str2[100];
    printf("Enter string 1 : ");
    fgets(str1,100,stdin);
    printf("Enter string 2 : ");
    fgets(str2,100,stdin);
    strcpy(str1,str2);
    printf("final string : %s",str1);
}