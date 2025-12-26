#include<stdio.h>
struct date{
    int date;
    int month;
    int year;
};
typedef struct time{
    int hours;
    int mins;
    int seconds;
} tm;
int main(){
    struct date d1;
    tm t1;
    printf("Enter Date Month and Year Separated by space : ");
    scanf("%d %d %d",&d1.date,&d1.month,&d1.year);
    printf("Enter Hours Mins and Seconds Separated by space : ");
    scanf("%d%d%d",&t1.hours,&t1.mins,&t1.seconds);
    printf("Date : %d/%d/%d\n",d1.date,d1.month,d1.year);
    printf("Time : %d : %d : %d\n",t1.hours,t1.mins,t1.seconds);
}