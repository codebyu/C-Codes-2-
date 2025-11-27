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
    char finChar;
    for(int i=0;i<count;i++){
        for(int k=0;k<count;k++){
            if(str[i]==str[k]){
              repeat[i]++;
              if(repeat[i]>repeat[i-1]){
                finChar=str[i];
              }
            }
        }
    }
    int final=repeat[0]; char done;
    for(int c=0;c<count;c++){
        if(repeat[c+1]>repeat[c]){
            final = repeat[c+1];
            
        }
        
    }
    printf("Max repeat is %c and %d times ",finChar,final);
}