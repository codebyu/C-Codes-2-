#include<stdio.h>
#include<string.h>
void checkChar(char str[],char ch){
    int count =0;
    for(int i=0;str[i]!='\0';i++){
        if (str[i]==ch){printf("Character %c is present in %s",ch,str); break;}
          else if(str[i+1]=='\0'){ printf("Character %c is not present in %s",ch,str);  }
    }
    
}
int main(){
    printf("Enter String : ");
    char str[100];
    fgets(str,100,stdin);
    printf("Enter character to search : ");
    char ch; scanf("%c",&ch);
    
    checkChar(str,ch);
}