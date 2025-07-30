#include<stdio.h>
#include<math.h>
float areaS(float side){
    return side*side;
}
float areaC(float radius){
    return 3.14*radius*radius;
}
float areaR(float L,float B){
    return 2*(L+B);
}
int main(){
    printf("Which Shape Area do you want to find ??\n1.Sqaure\n2.Circle\n3.Rectangle\n");
      int choice;
    scanf("%d",&choice);
    
    switch(choice){
        case 1: printf("Enter the side of the Square\n");
                float side;
                scanf("%f",&side);
                float area = areaS(side);
                printf("Calculated Area :%f\n",area);
                break;
        case 2: printf("Enter the radius of the Circle\n");
                float radius;
                scanf("%f",&radius);
                area = areaC(radius);
                printf("Calculated Area :%f\n",area);
                break;
        case 3: printf("Enter the Length and Breadth of the Rectangle separated by space\n");
                float l,b;
                scanf("%f %f",&l,&b);
                 area = areaR(l,b);
                printf("Calculated Area :%f\n",area);
                break;
    }
    printf("---------ThankYou---------");
    return 0;
}