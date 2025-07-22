#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the four no. separated by commas\n");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d); // hame ,&a,&b ese mtlb hme ,& to hmesha jitne bhi variable ho sbke liye hi likhna hai imp remember
    if(a>b&&a>c&&a>d)       
    printf("%d is largest \n",a);
    else if(b>a&&b>c&&b>d){
           printf("%d is largest \n",b);
    }
    else if(c>a&&c>b&&c>d){
        printf("%d is largest\n",c);
    }
    else if(d>a&&d>b&&d>c)
       printf("%d is largest \n",d);
    else if(a==b&&b==c&&c==d){
        printf("All no. are equal \n");
    else if
    }
}