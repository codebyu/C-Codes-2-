#include<stdio.h>
int main(){
    // min 40% , min 33%
    float p,c,m,s,t,tm,pctg,pp,cp,mp;
    printf("Passing Criteria : 33%% in each subject + 40%% in all subjects total\n");
    printf("Enter the marks of the following 3 subjects\n");
    printf("Physics : ");
    scanf("%f",&p);
    printf("Chemistry: ");
    scanf("%f",&c);
    printf("Maths : ");
    scanf("%f",&m);
    tm=p+c+m;
    s=0.33*200;
    t=0.40*600;
    pctg=tm/6;
    pp=p/2;
    cp=c/2;
    mp=m/2;
    if(p>=s&&c>=s&&m>=s&&tm>=t){
         if(p>200||c>200||m>200||tm>600){
        printf("Invalid marks entered by you");
        return 0;
    }
        printf("You have passed the exam !!\n");
        printf("Percentage : %f %%\n",pctg);
        printf("PHYSICS : %f %%\n",pp);
        printf("CHEMISTRY :%f %%\n",cp);
        printf("MATHS : %f %%",mp);
    }
    
    else{
        printf("You are failed in the exam !!\n");
        printf("Percentage : %f %%",pctg);
        printf("PHYSICS : %f %%\n",pp);
        printf("CHEMISTRY :%f %%\n",cp);
        printf("MATHS : %f %%",mp);
    }


}