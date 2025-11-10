#include<stdio.h>
void printString(char arr[]){
    for(int i=0;arr[i]!=0;i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main(){
    char firstName[] = "Darshan";
    char lastName[] = "Jain";
    // this means automatic null character is added when declaring array of characters as strings
    printString(firstName);
    printString(lastName);
    }

