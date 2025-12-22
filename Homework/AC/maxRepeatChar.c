#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter the string : ");
    char str[100]; int repeat[100];
    for(int z = 0; z<100; z++){
        repeat[z]=0;
    }
    fgets(str,100,stdin);
    int j=0;int count =0;    
    while(str[j]!='\0'){
        count ++; j++;
    }
    if(count>0&&str[count-1]=='\n'){
        str[count-1]='\0';
        count--;
    }
    
    char finChar=0;
    for(int i=0;i<count;i++){
        for(int k=0;k<count;k++){
            if(str[i]==str[k]){
             repeat[i]++; 
            }
        }
    }
    int final= 0; 
    for(int c=0;c<count;c++){
        if(repeat[c]>final){
            final = repeat[c];
            finChar=str[c];
            
        }
        
    }
    if(final>1){
        if(finChar==' '){
            printf("Max repeat is space and %d times",final);
        }
        else
        printf("Max repeat is %c and %d times ",finChar,final);

    }
    else printf("No Max repeat found !!");
}