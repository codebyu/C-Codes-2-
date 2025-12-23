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
                fgets(checkP,100,stdin);     int w;
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
                   }
                   switch(w){
                    case 1 : printf("Student Name : %s",st[sIndex].name);
                             printf("Roll No. : %d\n",st[sIndex].rollNo);
                             printf("Current Semester : %d\n",st[sIndex].semester);
                             printf("Date of Birth(In DDMMYYYY) : %s\n",st[sIndex].dob);
                             printf("To Go Back Enter 0\n");
                             int gb1; scanf("%d",&gb1);
                             if(gb1==0){  break; }
                    case 2 : printf("Calculated CGPA till %d semester is %f\n",st[sIndex].semester,st[sIndex].cgpa);
                             printf("To Go Back Enter 0\n");
                             int gb2; scanf("%d",&gb2);
                             if(gb2==0){  break; }
                    case 3 : printf("Remaining Fees : Rs.%d\n",st[sIndex].remFees);
                             printf("Do you want to 1.Pay Fees 2.Go back");
                             int gb3; scanf("%d",&gb3);
                             if(gb3==2){  break; }
                             else if(gb3==1){
                                printf("Enter The Amount Paid : Rs.");
                                int minFees; scanf("%d",&minFees);
                                printf("Fees Submitted Successfully.. \nRemaining Fees = Rs.%d",(st[sIndex].remFees)-minFees);
                                printf("To Go Back Enter 0\n");
                                int gb4; scanf("%d",&gb4);
                                if(gb4==0){  break; }
                             }
                    case 4 :if(st[sIndex].attedance!='x'){
                            printf("Today's Attendance : %c",st[sIndex].attedance); }
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
                fgets(checkPT,100,stdin); int td;
                while(1){
                if(strcmp(password,checkPT)==0){
                    if(td==0)   break;
                while(1){
                    printf("Welcome to Teacher Portal. Choose from options below : \n");
                    printf("1.See Profile Data\n2.See Student List\n3.Mark Attendance\nEnter Zero To Exit\n");
                int tcv; scanf("%d",&tcv);
                    if(td==0)   break;
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
                                scanf("%c",st[i].attedance);
                        }       printf("Attendance Submitted Successfully\n");
                                printf("To Go Back Enter 0\n");
                                scanf("%d",&td);
                                if(td==0){  break; }
                                break;
                        
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
                fgets(checkADM,100,stdin);  int ad;
                while(1){
                    if(ad==0){
                        break;
                    }
                if(strcmp(true,checkADM)==0){
                    if(ad==0) break;
                    else
                while(1){
                   printf("Welcome to Admin Portal. Choose from options below : \n");
                   printf("1.See Profile Data\n2.Add Admin Details\n3.Add Student Details\n4.Add Teacher Details\nTo Exit Enter 0\n");
                   int exiter;
                   scanf("%d",&ad); char dumpp; scanf("%c",&dumpp);
                   if(ad==0) break; 
                   switch(ad){
                        case 1: for(int i=0;i<10;i++){
                                 printf("Admin Name : %s\n",adm[i].name);
                                printf("Admin ID Number : %d\n",adm[i].id);
                                 printf("To Stop Enter 0\nTo continue adding admins Enter 1\n");
                            int sc; scanf("%d",&sc);
                            if(sc==0) break;
                            else if(sc==1) continue;
                        }
                                break;
                        case 2: for(int i=0;i<10;i++){
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
                                for(int i=0;i<100;i++){
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
                                     printf("To Stop Enter 0\nTo continue adding admins Enter 1\n");
                                    int sc; scanf("%d",&sc);
                                if(sc==0) break;
                                else if(sc==1) continue;
                                }
                                    break;
                        case 4: printf("Enter Teacher Details : \n");
                                for(int i=0;i<50;i++){
                                    printf("Details for Teacher %d\n",i+1);
                                    printf("Teacher Name : ");
                                    fgets(tc[i].name,100,stdin);
                                    printf("Teacher ID : ");
                                    fgets(tc[i].id,50,stdin);
                                    printf("Teacher Experience : ");
                                    scanf("%d",&tc[i].experience);
                                    printf("Teacher Salary : Rs.");
                                    scanf("%d",&tc[i].salary);
                                     printf("To Stop Enter 0\nTo continue adding admins Enter 1\n");
                                    int sc; scanf("%d",&sc);
                                    if(sc==0) break;
                                    else if(sc==1) continue;
                                }
                                    break;
                    default : printf("Invalid Key Pressed.. Try Again\n");
                   }

                   

    }
}//if
else{ printf("Wrong Password..\n");
    break;
}
        default : printf("Invalid Key Pressed.. Try Again\n");
}//while 
    
    }
}
    return 0;
}

