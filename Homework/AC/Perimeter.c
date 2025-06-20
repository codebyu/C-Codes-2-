// C Program to calculate the perimeter of a rectangle
#include<stdio.h>               //Principle Directives
int main(){                     //Main Function 
    float a,b;                  //Declaring Floating number a and b 
    /* now we ask user to enter the 
      length and breadth of the rectangle to find out its perimeter
    */
    printf("Enter the length of the rectangle : ");          
    scanf("%f",&a);
    printf("Enter the breadth of the rectangle : ");
    scanf("%f",&b);
    printf("The Calculated Perimeter of the rectangle will be %f units",2*(a+b));
    return 0;                   
}