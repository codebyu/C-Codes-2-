#include<stdio.h>
int SqRoot(float n){
    for(int i = 1;i<=n/2;i++){
        float k= n/i;
        if(k==i){
            printf("The Square root of %f is %d ",n,i);
            return 0;
        }
        else if(i==(int)(n/2)){
            printf("%f is not perfect square ",n);
        }
        
    }
}
int main(){
    printf("Enter the no. to find it's square root\n");
    float n;
    scanf("%f",&n);
    SqRoot(n);
}