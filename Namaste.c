#include<stdio.h>
void printNamaste(){
    printf("Namaste !!");

}
void printBonjour(){
    printf("Bonjour !!");
}
int main(){
    printf("Enter i to see greeting for Indians and f For User being French ");
    char a;
    scanf("%c",&a);
    if(a=='i'){
        printNamaste();

    }
    else if(a=='f'){
        printBonjour();
    }
    else{
        printf("Invalid \n");
    }
    return 0;
}