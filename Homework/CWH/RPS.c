#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct game{
    int score;
    int choice;
    int counter;
}; 
void choice(int gChoice){
    if(gChoice==1) printf("Rock\n");
    else if(gChoice==2) printf("Paper\n");
    else if(gChoice==3) printf("Scissor\n");
}
int result(int u,int c,int *p){
    printf("Your Choice : "); choice(u);
    printf("Computer Choice :"); choice(c);
    (*p)++;
if(u==c) return -1;
else{
    if(u==1&&c==3) return 1; 
    else if(u==2&&c==1)  return 1;
    else if(u==3&&c==2)  return 1; 
    else return 0; 
}    
}
int main(){
    srand(time(0));
    struct game p,c;
    p.counter=0;
    p.score=0,c.score=0;
while(1){
    int x;
printf("---Welcome to The Rock Paper Scissor Game---\n ");
printf("Let's Play Rock Paper Scissor with the Computer and see who wins\n ");
printf("What do You Want to do??\n1.Play Game\n2.See Scores\nTo Exit Enter 0\n");
scanf("%d",&x);
if(x==0)    break;
 p.choice=-1;
 switch(x){
    case 1: while(1){
        if(p.choice==0)    break;
            printf("Yee.. Lets Play ROCK PAPER SCISSOR\n");
            printf("What are you Choosing??\n1.Rock\n2.Paper\n3.Scissor\nTo Go Back Enter 0\n");
            int final; 
            scanf("%d",&p.choice);
            if(p.choice==0) break; 
            c.choice = (rand()%3)+1; 
            if(p.choice==1||p.choice==2||p.choice==3){
                final = result(p.choice,c.choice,&p.counter);
            }
            else{    printf("Wrong Option Selected.. \n");  continue;}
            if(final==1) {printf("Wohoo.. You Won The Game!!!!\n");
                            p.score++;
            }
            else if(final==0){ printf("Oops.. You Loss The Game.. Try Next Time\n");
                            c.score++;
            }
            else    printf("Tie Occurs.. Try Again \n"); 
            printf("Your Score : %d\n",p.score);
            printf("Computer Score : %d\n",c.score);
            printf("Attempts : %d\n",p.counter);
            printf("To Play Again Enter Any Number and To Go Back Enter 0\n");
            scanf("%d",&p.choice);
        }
        break;
    case 2: printf("Here are the scores \n");
            printf("Your Score : %d\n",p.score);
            printf("Computer Score : %d\n",c.score);
            printf("Attempts - %d\n",p.counter);
            printf("Enter any key to go back\n");
            getchar(); getchar();
            break;
 } //switch 

} //while 
return 0;
}
