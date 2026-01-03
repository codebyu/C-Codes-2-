#include<stdio.h>
#include<string.h>
struct vector{
    int x;
    int y;

};
void printSum(struct vector v1,struct vector v2){
    int sumX= v1.x+v2.x;
    int sumY= v1.y+v2.y;
    printf("Final Vector %di^+%dj^\n",sumX,sumY);
    
}
int main(){
    struct vector v1,v2;
    v1.x=2;
    v1.y=3;
    v2.x=4;
    v2.y=5;
    printSum(v1,v2);
    return 0;
}