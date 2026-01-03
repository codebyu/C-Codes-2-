#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int rollNo;
    float cgpa;
    int semester;
    char dob[10];
    int remFees;
    char attedance;
    char payStatus[50];
    long long upiRef;
    int amountPaid;
};
struct teacher{
    char name[100];
    char id[50];
    int experience;
    int salary;
};
struct admin{
    char name[100];
    int id;
};
    struct student st[100];
    struct teacher tc[50];
    struct admin adm[10];
int main(){
    for(int i=0;i<100;i++){
        st[i].rollNo=-1;
    };
    for(int i=0;i<100;i++){
        st[i].attedance='x';
    };
    for(int i=0;i<50;i++){
        strcpy(tc[i].id,"ok");
    };
    for(int i=0;i<10;i++){
        adm[i].id=-1;
    };
    for(int i=0;i<100;i++){
        strcpy(st[i].payStatus,"Pending");
    }
    for(int i=0;i<100;i++){
        st[i].upiRef=-1;
    }
    for(int i=0;i<100;i++){
        st[i].remFees=-1;
    }
    printf("---Welcome To The College Management System---\n");
    while(1){
    printf("Which Portal do you want to access : \n");
    printf("1.Student \n2.Teacher \n3.Admin\nTo Exit Enter 0\n");
    int x;
    scanf("%d",&x);
    if(x==0){ break; }
    char c; scanf("%c",&c);  //for removing extra \n
    char password[100],password2[100]; int sIndex;
    switch(x){
        case 1:
                strcpy(password,"Student@");
                int checkR;
                printf("Enter Your Roll Number : ");
                scanf("%d",&checkR); char dump1; scanf("%c",&dump1);
                for(int i=0;st[i].rollNo!=-1;i++){
                    if(st[i].rollNo==checkR){
                        strcat(password,st[i].dob);
                        strcat(password,"\n");
                        sIndex=i;
                    }
                }
                printf("Enter Password : ");
                char checkP[100];
                fgets(checkP,100,stdin);     int w=-1;
                while(1){
                if(strcmp(password,checkP)==0){
                    if(w==0){
                        break;
                    }
                while(1){
                   printf("Welcome to Student Portal. Choose from options below : \n");
                   printf("1.See Profile Data \n2.See CGPA till last semester\n3.Pay Fees or Check Fees Status\n4.See Today's Attendance\n-To Exit Enter Zero-\n");
                   scanf("%d",&w);
                   if(w==0){
                    break;
                   }    int demoLT=-1;
                   switch(w){  
                    case 1 : printf("Student Name : %s",st[sIndex].name);
                             printf("Roll No. : %d\n",st[sIndex].rollNo);
                             printf("Current Semester : %d\n",st[sIndex].semester);
                             printf("Date of Birth(In DDMMYYYY) : %s\n",st[sIndex].dob);
                             printf("To Go Back Enter 0\n");
                             int gb1; scanf("%d",&gb1);
                             if(gb1==0){  break; }
                    case 2 : printf("Calculated CGPA till now is %f\n",st[sIndex].cgpa);
                             printf("To Go Back Enter 0\n");
                             int gb2; scanf("%d",&gb2);
                             if(gb2==0){  break; }
                    case 3 : while(1){ 
                                if(demoLT==0){ break; }        
                        printf("Remaining Fees : Rs.%d\n",st[sIndex].remFees);
                             printf("Do you want to \n1.Pay Fees\n2.Check Status of Recent Transaction\n3.Go Back\n");
                             int gb3; scanf("%d",&gb3);
                             if(gb3==3){  break; }
                             else if(gb3==1){
                                printf("Pay The Amount to the UPI Id given below\nUPI Id - darshanjain@ptaxis\nAfter payment ");
                                printf("Enter the Following Details : \n");
                                printf("Enter The Amount Paid : Rs.");
                                scanf("%d",&st[sIndex].amountPaid);
                                printf("UPI Ref No. : ");
                                scanf("%lld",&st[sIndex].upiRef);
                                printf("Transaction Details Sent Successfully.. \n");
                                strcpy(st[sIndex].payStatus,"Pending");
                                printf("Current Status : %s\n",st[sIndex].payStatus);
                                printf("(Payment Is usually confirmed within 24 hours)\nCome again to check updated status\n");
                               
                                printf("To Go Back Enter 0\n");
                                int gb4; scanf("%d",&gb4);
                                if(gb4==0){  break; }
                             }
                             else if(gb3==2) {
                                printf("Last Transaction Details : \n");
                                printf("Amount Paid : %d\n",st[sIndex].amountPaid);
                                printf("UPI Ref No. : %lld\n",st[sIndex].upiRef);
                                printf("Current Status : %s\n",st[sIndex].payStatus);
                                printf("To Go Back Enter 0\n");
                                scanf("%d",&demoLT);
                             }
                             }
                             break;
                    case 4 :if(st[sIndex].attedance!='x'){
                            printf("Today's Attendance : %c\n",st[sIndex].attedance); }
                            else{
                                printf("Today's Attendance Not Marked.\n");
                            }
                            break;
                    default : printf("Wrong Key Pressed\n");  
                }  

                   }
                }
                 else{
                    printf("Wrong Password. Try Again ");
                    break;
                }
                }
                break;
        
        case 2 : strcpy(password,"Teacher@");
                char checkI[50];
                printf("Enter Your Registered ID Number : ");
                fgets(checkI,50,stdin); 
                for(int i=0;strcmp(tc[i].id,"ok")!=0;i++){
                    if((strcmp(checkI,tc[i].id))==0){
                        strcat(password,tc[i].id);                
                        
                        sIndex=i;
                    }
                }
                printf("Enter Password : ");
                char checkPT[100];
                fgets(checkPT,100,stdin); int td=-1;
                while(1){
                if(strcmp(password,checkPT)==0){
                    if(td==0)   break;
                while(1){
                    printf("Welcome to Teacher Portal. Choose from options below : \n");
                    printf("1.See Profile Data\n2.See Student List\n3.Mark Attendance\nEnter Zero To Exit\n");
                int tcv; scanf("%d",&tcv);
                    
                    if (tcv==0)  break;
                    switch(tcv){
                        case 1: printf("Teacher Detail:\n");
                                printf("Teacher Name : %s",tc[sIndex].name);
                                printf("ID Number : %s",tc[sIndex].id);
                                printf("Experience : %d\n",tc[sIndex].experience);
                                printf("Salary : Rs.%d\n",tc[sIndex].salary);
                                printf("To Go Back Enter 0\n");
                                 scanf("%d",&td);
                                if(td==0){  break;}
                                break;
                        case 2: printf("---List of Students---\n");
                                for(int i=0;st[i].rollNo!=-1;i++){
                                printf("%d Name : %s\tRollNo. :%d\tCGPA :%f\tAttendance :%c\n",i+1,st[i].name,st[i].rollNo,st[i].cgpa,st[i].attedance);
                        }      
                                printf("To Go Back Enter 0\n");
                                 scanf("%d",&td);
                                if(td==0){  break; }
                                break;
                        case 3: for(int i=0;st[i].rollNo!=-1;i++){
                                printf("%s : ",st[i].name); 
                                scanf(" %c",&st[i].attedance);
                                }       
                                printf("Attendance Submitted Successfully\n");
                                printf("To Go Back Enter 0\n");
                                scanf("%d",&td);
                                if(td==0){  break; }
                                break;
                        default : printf("Invalid Key Pressed.. Try Again\n");
                    }
                            

        
            }
                      
    }
            else{
                    printf("Wrong Password. Try Again ");
                    break;
                }
                
            }   break;
        case 3: printf("Enter Password : ");
                char checkADM[100];
                char true[100]="Admin@159\n";
                fgets(checkADM,100,stdin);  int ad=-1;
                while(1){
                    if(ad==0){
                        break;
                    }
                if(strcmp(true,checkADM)==0){
                    if(ad==0) break;
                    else{
                while(1){
                   printf("Welcome to Admin Portal. Choose from options below : \n");
                   printf("1.See Profile Data\n2.Add Admin Details\n3.Add Student Details\n4.Add Teacher Details\n5.Fees Management\nTo Exit Enter 0\n");
                   int exiter;
                   scanf("%d",&ad); char dumpp; scanf("%c",&dumpp);
                   if(ad==0) break; 
                   switch(ad){
                        case 1: for(int i=0;i<10;i++){
                                 printf("Admin Name : %s",adm[i].name);
                                printf("Admin ID Number : %d\n",adm[i].id);
                                 printf("To Go Back Enter 0 & To See More Admins Details Enter 1\n");
                            int sc; scanf("%d",&sc);
                            if(sc==0) break;
                            else if(sc==1) continue;
                        }
                                break;
                        case 2: for(int i=0;i<10;i++){
                                if(i>0){
                                    char demo; scanf("%c",&demo);
                                }
                            printf("Enter Admin Name : ");
                            fgets(adm[i].name,100,stdin);
                            printf("Enter ID Number : ");
                            scanf("%d",&adm[i].id);
                            printf("To Stop Enter 0\nTo continue adding admins Enter 1\n");
                            int sc; scanf("%d",&sc);
                            if(sc==0) break;
                            else if(sc==1) continue;
                        }       break;
                        case 3: printf("Enter Student Details : \n");
                                int sc;
                                for(int i=0;i<100;i++){
                                    if(st[i].rollNo==-1){
                                    if(i>0&&sc==1) { char demo1; scanf("%c",&demo1); }
                                    printf("Details for student %d\n",i+1);
                                    printf("Enter Name : ");
                                    fgets(st[i].name,100,stdin);
                                    printf("Enter Roll No. : ");
                                    scanf("%d",&st[i].rollNo);
                                    printf("Enter CGPA : ");
                                    scanf("%f",&st[i].cgpa);
                                    printf("Enter Semester : ");
                                    scanf("%d",&st[i].semester);
                                    printf("Enter Date of Birth(in DDMMYYYY) : ");
                                    scanf("%s",st[i].dob);
                                    printf("Enter Remaining Fees : Rs.");
                                    scanf("%d",&st[i].remFees);
                                    printf("Enter 0 to Go Back & 1 to Add Another Student\n");
                                    scanf("%d",&sc);
                                if(sc==0) break;
                                else if(sc==1) continue;
                                }}
                                    break;
                        case 4: printf("Enter Teacher Details : \n");
                                for(int i=0;i<50;i++){
                                    if(i>0) { char demo3; scanf("%c",&demo3); }
                                    printf("Details for Teacher %d\n",i+1);
                                    printf("Teacher Name : ");
                                    fgets(tc[i].name,100,stdin);
                                    printf("Teacher ID : ");
                                    fgets(tc[i].id,50,stdin);
                                    printf("Teacher Experience : ");
                                    scanf("%d",&tc[i].experience);
                                    printf("Teacher Salary : Rs.");
                                    scanf("%d",&tc[i].salary);
                                     printf("To Go Back Enter 0 & To Add another Teacher Enter 1\n");
                                    int sc; scanf("%d",&sc);
                                    if(sc==0) break;
                                    else if(sc==1) continue;
                                }
                                    break;
                    case 5 : 
                                
                                printf("Choose the option from below : \n");
                                int appr;
                             printf("1.Remaining Fees Students List\n2.Approve/Reject Fees Payment Request\nTo Go Back Enter Zero\n");
                             int f;
                             scanf("%d",&f); char dump5 ; scanf("%c",&dump5);
                             switch(f){
                                case 1:  printf("List of Students and their Remaining Fees : \n");
                                        for(int i=0;st[i].remFees!=-1;i++){
                                            printf("%s : ",st[i].name);
                                            printf("%d\n",st[i].remFees);
                                }     printf("To Go Back Enter 0 \n ");
                                        int y1; scanf("%d",&y1);
                                      break;
                                case 2:  printf("Approve Or Reject the Fees Payment Request Submitted by the Students \n");
                                        int c=1;
                                        for(int i=0;i<100;i++){
                                            if(st[i].upiRef!=-1){ 
                                                printf("Transaction No. %d\n",c);
                                                printf("Student Name : %s",st[i].name);
                                                printf("Roll No. : %d\n",st[i].rollNo);
                                                printf("Amount Paid : %d\n",st[i].amountPaid);
                                                printf("UPI Ref No. : %lld\n",st[i].upiRef);
                                                c++;
                                                printf("To Approve Press 1 , To Reject Press 2 & To Go back press 0\n");
                                                
                                                scanf("%d",&appr);
                                                if(appr==1){
                                                    strcpy(st[i].payStatus,"Success");
                                                    st[i].remFees-= st[i].amountPaid;
                                                 
                                                    printf("Fees Submitted Successfully.. \nRemaining Fees = Rs.%d\n",(st[sIndex].remFees));
                                
                                                }
                                                else if(appr==2){
                                                    strcpy(st[i].payStatus,"Rejected");
                                                }
                                                if(appr==1||appr==2){
                                                    st[i].upiRef=-1;
                                                }
                                                else if(appr==0){
                                                    break;
                                                }
                                                else{ printf("Wrong Key Pressed \n"); }
                                            }
                                            
                                        }
                                            break;
                        default : if(f!=0) printf("Invalid Key Pressed.. Try Again\n");
                             }
                                 break;
            default : if(ad!=0) printf("Invalid Key Pressed .. Try Again\n");
                    
                   }

                    
                }
    }
}//if
else{ printf("Wrong Password..\n");
    break;
}


}//while 
break;
 default :     if(ad!=0) printf("Invalid Key Pressed.. Try Again\n");
}

}
    return 0;
}