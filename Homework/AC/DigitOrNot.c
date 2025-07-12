#include<stdio.h>
int main(){
    char c; int i;
    printf("Enter to check if it is digit or not \n");
    scanf("%c",&c);
    (c>='0'&&c<='9') ? printf("Digit Hai !!"): printf("Letter ya symbol hai ");
    (c=='-') ? printf("? Nahi Hai \nDigit negative hai ya fir - ke bad digit ke alawa kuch or likha hai like character or symbol"): printf(" ThankYou");
        return 0;
}  