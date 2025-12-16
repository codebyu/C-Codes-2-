#include<stdio.h>
#include<string.h>
struct address{
    int number;
    char block;
    char city[100];
    char state[100];
    char key;
};
int main(){
    int n; char dump;

    struct address array[5];
     for(int i=0;i<5;i++){
        array[i].number=NULL;
     }
      int i=0;
    
    while(1){
    printf("Welcome to ADDRESS MANAGEMENT SYSTEM\n1.Create address\n2.See Existing Addresses\n3.Modify Address\nTo Exit Enter Zero \n");
    printf("\nWhat do you want to do : ");
    scanf("%d",&n);
    if(n==0){
        break;
    }
    switch(n){
        case 1:  
                    printf("Enter House No. : ");
                    scanf("%d",&array[i].number);
                    scanf("%c",&dump);
                    printf("Enter Block : ");
                    scanf("%c",&array[i].block);
                    scanf("%c",&dump);
                    printf("Enter City : ");
                    scanf("%s",array[i].city);
                    scanf("%c",&dump);
                    printf("Enter State : ");
                    scanf("%s",array[i].state);
                    scanf("%c",&dump);
                    i++;
                    break;
        case 2: 
            for(int j=0;array[j].number!=NULL;j++){
                printf("----House Details----\n");
                printf("Serial No. %d\n",j+1);
                printf("House No. : %d\n",array[j].number);
                printf("Block : %c\n",array[j].block);
                printf("City : %s\n",array[j].city);
                printf("State : %s\n\n",array[j].state);
            }
                break;
    case 3: 
            printf("Enter House no. to modify its details : ");
            int temp;
            int realizer = 0;
            scanf("%d",&temp);
            for(int k=0;array[k].number!=temp;k++){
                realizer ++;
            }
            realizer ++;
            
            char blocker;
             
            while(1){
                printf("What do you want to change : ");
                 printf("1.House Number\t2.Block\t3.City\t4.State\nTo stop enter zero \n");
                 int m; scanf("%d",&m);
                if (m==0 ){
                    break;
                }
           
            switch(m){
                case 1 : printf("Enter New House No. : ");
                        int newH;
                        scanf("%d",&newH);
                            array[realizer-1].number = newH;
                            printf("Successfully Updated\n");
                            break;
                case 2: printf("Enter New Block : ");
                   
                        scanf("%c",&blocker);
                        char newB;
                        scanf("%c",&newB);
                            array[realizer-1].block = newB;
                            printf("Successfully Updated\n");
                            break;
                case 3: printf("Enter New City : ");
                    scanf("%c",&blocker);
                        char newC[100];
                        scanf("%s",newC);
                            strcpy(array[realizer-1].city,newC);
                            printf("Successfully Updated\n");
                            break;
                case 4: printf("Enter New State : ");
                        scanf("%c",&blocker);
                        char newS[100];
                        scanf("%s",&newS);
                            strcpy(array[realizer-1].state,newS);
                            printf("Successfully Updated\n");
                            break;
                default : printf("Enter valid key..");
            }
                
            }          
    }
    }
}
