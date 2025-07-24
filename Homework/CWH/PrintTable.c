#include<stdio.h>
int  main()
{
    printf("Enter the want for which you want table\n");
    int n;
    scanf("%d",&n);
    printf("Here is your table of %d\n",n);
    for(int i = 1;i<=10;i++){
        printf("%d\n",n*i);
    }
    printf("THANKU YOU VISIT AGAIN !!");
}