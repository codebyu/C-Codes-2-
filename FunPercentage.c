#include<stdio.h>
float percentage(int s,int m,int st);

int main(){
    printf("Enter the scinece maths and sanskrit marks separated by space\n");
    int s,m,st;
    scanf("%d %d %d",&s,&m,&st);
    if(s>100||m>100||st>100){
        printf("Invalid Marks ");
        return 0;
    }
    printf("Your Calculated Percentage : %f%%",percentage(s,m,st));
    
return 0;
}

float percentage(int s,int m,int st){
    float p= (s+m+st)/3;
    return p;
}