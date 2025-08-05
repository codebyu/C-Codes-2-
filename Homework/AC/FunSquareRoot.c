#include<stdio.h>
int squareRoot(float n,float i);
float i,n;
float main(){
    printf("Enter the no. to find it's square root upto such 18 digits : 9,223,372,036,854,775,807 \n");
    float n;
    scanf("%f",&n);
    squareRoot(n,n);
}

int squareRoot(float n,float i){
    
    if(i==0){
        printf("Not a perfect square root");
        return 0;
    }
    
   

 float p = n/i;
 if(p==i){
    printf("The sq. root of %f is %f",n,p);
 }
 else{
 squareRoot(n,i-1);
 }

 return 0;
}