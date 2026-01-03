#include<stdio.h>
int main(){ 
    printf("What do you want to do : \n");
    printf("1.Add Students \n2.See Students\n");
    int x; scanf("%d",&x); getchar();
    FILE *fptr;
    switch(x){

    case 1 : 
    printf("How much Student Data do You want to store : ");
    int k;
    scanf("%d",&k); getchar();
    fptr=fopen("StudentData.txt","w");
    for(int j=1;j<=k;j++){
    
    printf("Enter Details of Student %d : \n",j);
    printf("Enter Name : ");
    char name[100];
        if(j>1){
        char ch=getchar();
        }
    fgets(name,100,stdin);
    fprintf(fptr,"Student Name : %s",name);
    printf("Enter Roll No. : ");
    int roll;
    scanf("%d",&roll);
    fprintf(fptr,"Student %d Roll No. : %d\n",j,roll);
    
    printf("Enter CGPA : ");
    float cgpa;
    scanf("%f",&cgpa);
    fprintf(fptr,"CGPA : %f\n",cgpa);;
    
    }
    fclose(fptr);
    break;
    case 2 : fptr=fopen("StudentData.txt","r");
                for(int m=1;m<=5;m++){
                    char str[100];
        fscanf(fptr,"Student Name : %99[^\n] ",str);
        printf("Student Name : %s\n",str); int roll2;
        int demo;
        fscanf(fptr,"Student %d Roll No. : %d\n",&demo,&roll2);
        printf("Student Roll No . : %d\n",roll2); float cgpa2;
        fscanf(fptr,"CGPA : %f\n",&cgpa2);
        printf("CGPA : %f\n",cgpa2);
                }
                fclose(fptr);

                break;
    }

    return 0;
}