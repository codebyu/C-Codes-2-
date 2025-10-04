#include<stdio.h>
int main(){
    int arr[]={1,2,3,2,2,2,4,5,7,8,9,9};
    printf("Which no. do you wanna check ? ");
    int x; scanf("%d",&x);
    int count =0;
    for(int i =0;i<12;i++){
        if(arr[i]==x){
            count++;
        }
        else{
            continue;
        }
    }
    printf("The given no. is present %d times in the array \n",count);
    return 0;
}