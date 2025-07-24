#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int en,attm=0;
    srand(time(0));
    printf("+----------------------------------------+\n");
    printf("|-------- NUMBER GUESSING GAME ----------|\n");
    printf("+----------------------------------------+\n");         
    printf("I have Chosen a Random No. Between 1 to 100. \nLet's Guess It !!\n");
    int n = (rand()%100)+1;
    scanf("%d",&en);
    attm++;
    while(en!=n){
        if(en>n){
            printf("Too High !! Go For a Lower One..\n");
             scanf("%d",&en);
             attm++;
        }
        else if(en<n){ 
            printf("Too Low !! Go For a Higher One..\n");
             scanf("%d",&en);
            attm++;
           
        }
        
          
        }
        printf("Congrats !! You have Won the Game %d is the Correct No.\n",en);
            printf("Guess Attempts - %d\n",attm);
            
         
 printf("-------- Try To Reduce The Attempts Next Time --------\n");

    }
    
