#include<stdio.h>
#define gst 0.18
int main(){
    float price[]={45,101,230};// remember semicolon is must
    printf("Enter 1st Product Price : ");
    scanf("%f",&price[0]);
      printf("Enter 2nd Product Price : ");
    scanf("%f",&price[1]);
      printf("Enter 3rd Product Price : ");
    scanf("%f",&price[2]);
    printf("Final 1st Product Price : %f\n",price[0]+(price[0]*gst));
      printf("Final 2nd Product Price : %f\n",price[1]+(price[1]*gst));
      printf("Final 3rd Product Price : %f\n ",price[2]+(price[2]*gst));

    
}