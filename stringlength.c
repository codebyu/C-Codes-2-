#include<stdio.h>
int count(char arr[]){
    int i=0; int count =0; // listen count is started from one bcoz fgets add \n first then \0 so \n counted extra but we do not want that 
        while(arr[i]!='\0'){
        count++;
        ++i;
        }
        return count-1;
}
int main(){

    char str[50];
    printf("Enter name : ");
    fgets(str,50,stdin);
    
    
    printf("Length of the name : %d",count(str));

}