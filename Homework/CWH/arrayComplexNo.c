#include<stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}cp;
int main(){
    cp numbers[5];
    printf("Consider Complex Number as a+ib where i is (-1)^1/2\n");
    for(int i=0;i<5;i++){
        printf("Enter real part(a) of complex no. %d : ",i+1);
        scanf("%d",&numbers[i].real);
        printf("Enter imaginary part(b) of complex no. %d : ",i+1);
        scanf("%d",&numbers[i].imaginary);
    } 
    printf("Complex Numbers As Entered By the User \n");
    for(int i=0;i<5;i++){

        printf("Complex Number %d : ",i+1);
        printf("%d + i%d\n",numbers[i].real,numbers[i].imaginary);
    }
}