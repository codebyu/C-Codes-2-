#include<stdio.h>
int main(){
    int arr[] = {95,90,92,97};
     int *ptr =&arr[3];
      for(int i=3;i>=0;i--){
         printf("%d\n",ptr);
         ptr--; // on incrememnt and decrement of pointer it incremented or decremented acc to it's datatype like if int then 4 byte will be changed 
      }

}