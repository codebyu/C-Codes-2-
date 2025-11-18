#include<stdio.h>
#include<string.h>
void salting(char password[]){
    char salt[]="123";
    char newpass[200];
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);
}
int main(){
    printf("Enter Password : ");
    char pass[100];
    scanf("%s",pass);
    salting(pass);
    return 0;

}