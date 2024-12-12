#include<stdio.h>
int main()
{
    int b,a,s,m,d,r,x,y;
    printf("Welcome to the Calculator\n");
    printf("Which Operation do you want to perform\n1.Additon\n2.Substraction\n3.Multiplication\n4.Division\n5.Find the Remainder\n");
    scanf("%d",&b);
    printf("Ok You Have Chosen %d\n",b);
    printf("Now, Enter the First Number :\n");
    scanf("%d",&x);
    printf("Now, Enter the Second Number : \n");
    scanf("%d",&y);
    printf("Ok Lets Do the Operation %d on %d and %d \n",b,x,y);
    a = x+y;
    s = x-y;
    m = x*y;
    d = x/y;
    r = x%y;
    if(b==1){
        printf("Your Addition Result is :%d\n",a);
    }
    else if(b==2){
       printf("Your Substraction Result is :%d\n",s);
    }
    else if(b==3){
        printf("Your Multiplication Result is :%d\n",m);
    }
    else if(b==4){
        printf("Your Division Result is :%d\n",d);
    }
    else if(b==5){
        printf("Remainder after dividing the first Number by second Number is %d\n",r);
    }
    else if(b>5){
        printf("Invalid Selection\n");
    }
    printf("ThankYou For Using Our Services");
    return 0;
    
}
