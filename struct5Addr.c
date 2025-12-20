#include<stdio.h>
#include<string.h>
struct address{
    int number;
    char block;
    char city[100];
    char state[100];
};
int main(){
    int n;
    struct address array[6];
     for(int i=0;i<6;i++){
        array[i].number=-1;
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
                    if(i>=5){
                        printf("Address Book Full\n");
                        break;
                    }
                    printf("Enter House No. : ");
                    scanf("%d",&array[i].number);
                    printf("Enter Block : ");
                    scanf(" %c",&array[i].block);
                    printf("Enter City : ");
                    scanf("%s",array[i].city);
                    printf("Enter State : ");
                    scanf("%s",array[i].state);
                    i++;
                    break;
        case 2: 
            for(int j=0;array[j].number!=-1;j++){
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
            int realizer = -1;
            scanf("%d",&temp);
            for(int k=0;array[k].number==temp;k++){
                realizer =k;
            }
            if(realizer==-1){
                printf("No House Found\n");
                break;
            }
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
                            array[realizer].number = newH;
                            printf("Successfully Updated\n");
                            break;
                case 2: printf("Enter New Block : ");
                        char newB;
                        scanf(" %c",&newB);
                            array[realizer].block = newB;
                            printf("Successfully Updated\n");
                            break;
                case 3: printf("Enter New City : ");
                        char newC[100];
                        scanf("%s",newC);
                            strcpy(array[realizer].city,newC);
                            printf("Successfully Updated\n");
                            break;
                case 4: printf("Enter New State : ");
                        char newS[100];
                        scanf("%s",newS);
                            strcpy(array[realizer].state,newS);
                            printf("Successfully Updated\n");
                            break;
                default : printf("Enter valid key..");
            }
                
            }          
    }
    }
}
