#include<stdio.h>
int main(){
    char str[100];
    printf("Enter Password : ");
    fgets(str,100,stdin);
    int i=0;int count=0;
    while(str[i]!='\n'){
        count++; i++;
    }
    for(int i=0;i<count;i++){
        str[i]++;
    }
    printf("Password Encrypted.. Do you want to see it encrypted ?");
    printf("\n1.Yes\n2.No\n");
    int x;
    scanf("%d",&x);
    switch(x){
        case 1: printf("%s",str);
                break;
    
        case 2: printf("OK Go..");
                return 0;
                break;
        default: printf("Wrong Key pressed..");
    }
    printf("Want to decrypte it ..\n");
    printf("1.Yes \n2.No\n");
    int y;
    scanf("%d",&y);
    switch(y){
        case 1:    for(int k=0;k<count;k++){
                    str[k]--;
        }
                    printf("Decrypted Password : %s",str);
    
    break;
       
        case 2: printf("OK Go..");
                return 0;
                break;
        default: printf("Wrong Key pressed..");
    }
}

