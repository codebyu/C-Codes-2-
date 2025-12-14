#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter the string : ");
    char str[100];
    fgets(str,100,stdin);
    int i=0;int count =0;
    while(str[i]!='\0'){
        count++;i++;
    }
    if(count>0&&str[count-1]=='\n'){
        str[count-1]='\0'; count--;
    }
    for(int i=0;i<count;i++){
        if(str[i]==' '){
            str[i]=str[i+1];
            for(int j=1;j<count;j++){
                str[i+j]=str[i+j+1];
                
            }
            count--;
        }
    }
    printf("Here's the String : ");
    puts(str);
    printf("\nCount : %d",count);

    }
