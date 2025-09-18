#include<stdio.h>
int calOddNo(int arr[],int size){
    int count =0;
    for(int i =0;i<size;i++){
        if((arr[i]%2)!=0){
         count++;
    }
    else{
        continue;
    }
   
}
 return count;
}
int main(){
    int array[]={7,49,5,7,9,47,47};
    printf("No. of Odd No. in the array is %d",calOddNo(array,9));
}
