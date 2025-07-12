#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    switch(c){
        case 'm':
        printf("Monday\n");
        break;
        case 't' :
        printf("Tuesday\n");
        break;
        default:
        printf("It's an invalid day\n");
    }
return 0;
}