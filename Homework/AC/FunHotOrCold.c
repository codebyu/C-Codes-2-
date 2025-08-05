#include<stdio.h>
int HorC(float t){
    if(t>=25){
        printf("Hey !! It's Hot.. as temperature is %f degree celcius \n",t);
    }
    else{
        printf("Hey !! It's Cold.. as temperature is %f degree celcius\n",t);
    }
    return 0;
}

int main(){
    printf("Enter the temperature in celcius to see it is Hot or Cold\n");
    float t;
    scanf("%f",&t);
    HorC(t);
    return 0;
}