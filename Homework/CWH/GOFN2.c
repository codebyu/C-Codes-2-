#include<stdio.h>
int main(){
    int a,b,c,d,max;
    printf("Enter the fours no. separated by space \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b&&b==c&&c==d){
        printf("all no are equal\n");
    }
    else{
        max=a;
        if(max<b)  max=b;
        if(max<c)  max=c;
        if(max<d)  max=d;
        printf("%d is maximum",max);
    }
    
}