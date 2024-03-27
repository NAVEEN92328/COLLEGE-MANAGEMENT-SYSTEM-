#include<iostream>// for Standard input and output
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
 
 
//golabally declare
int T_fee,discount=0;
int a;
 
using namespace std;
struct add{
     //struct variables declaration
     string f_name;
     string address,par_addr,b_group;
     string CNIC,DOB,cless,gender,f_CNIC,p_no,eml,board,p_year,m_marks;
     int m_income;
     string name;
 
    };
    //main function starts from here
main(){
     system("COLOR 49");
     xyz:
     string nam,pasw;
     string name="Deepak",Password="Deepu123";
     namew:
     cout<<"Enter the name=";
     cin>>nam;
     cout<<"Enter the password=";
     cin>>pasw;
     if(nam=="Deepak" && pasw=="Deepu123"){
        cout<<"You Are Login="<<endl;
        Sleep(1000);
        cout<<"Loading";
        Sleep(0700);
        cout<<".";
        Sleep(0700);
        cout<<".";
        Sleep(0700);
            cout<<".";
     Sleep(0700);
     system("cls");
     add s;
     system("COLOR BC");
cout<<"**********************************************************"<<endl<<
"**********************************************************"<<endl<<
      "***\t\t              WELCOME                        "<<"***"<<endl<<
      "***\t\t                TO                           "<<"***"<<endl<<
      "***\t\t SAVEETHA SCHOOL OF ENGINEERING MANAGEMENT   "<<"***"<<endl<<
      "**********************************************************"<<endl<<
      "**********************************************************"<<endl;
// we are going to main menu
menu:
      cout<<"****************************************************"<<endl;
      cout<<"*                   MAIN MENU                      *"<<endl<<
            "****************************************************"<<endl;
int select;
 
    cout<<"1: for COURSES INFO:"<<endl;
    cout<<"2: for ADMISSION :"<<endl;
    cout<<"3: for TEACHERS RECORD:"<<endl;
    cout<<"4: Time Sechedule"<<endl;
    cout<<"5: Exit:"<<endl;
    cout<<"enter your selection:";
    cin>>select;
    system("cls");
    switch(select){
    cout<<"the info about COURSES are as:"<<endl;
cout<<"________________________________________________________________________"<<endl<<
"*                                                                              *"<<endl;
 
//classes display
 
int choiceA,choice;
case 1:
    cout<<"1:for f.sc medical "<<endl;
    cout<<"2:for f.sc engineering"<<endl;
    cout<<"3:for ics"<<endl;
    cout<<"4:for i.com"<<endl;
    cout<<"5:for f.a"<<endl;
    cout<<"enter your choice[1-5]=";
    cin>>choiceA;
    if(choiceA==1){
            cout<<"*********************************************************"<<endl<<
                      "THE INFORMATION ABOUT F.SC MEDICAL AS"<<endl<<
            "*********************************************************"<<endl<<
            "/////////////////////////SUBJECT///////////////////////////"<<endl<<
            "1:BIOLOGY"<<endl<<
            "2:CHEMISTRY"<<endl<<
            "3:PHYSICS"<<endl;
            cout<<"FEE RECOMMENDED FOR F.SC PRE-MEDICAL"<<endl<<
            "Registeration Fee\t\t\t4500"<<endl<<
            "Tution Fee\t\t\t\t18000"<<endl<<
            "Liberary Fee\t\t\t\t2500"<<endl<<
            "Security Fee\t\t\t\t1000"<<endl;
            T_fee=75000;
            cout<<"the total fee for fsc is:\t\t"<<T_fee<<endl;}
          else  if(choiceA==2){
            cout<<"*********************************************************"<<endl<<
                      "THE INFORMATION ABOUT F.SC ENGINEERING AS"<<endl<<
            "*********************************************************"<<endl<<
            "/////////////////////////SUBJECT///////////////////////////"<<endl<<
            "1:MATHEMATICS"<<endl<<
            "2:CHEMISTRY"<<endl<<
            "3:PHYSICS"<<endl;
            cout<<"FEE RECOMMENDED FOR F.SC PRE-ENGINEERING"<<endl<<
            "Registeration Fee\t\t\t4500"<<endl<<
            "Tution Fee\t\t\t\t18000"<<endl<<
            "Liberary Fee\t\t\t\t2500"<<endl<<
            "Security Fee\t\t\t\t1000"<<endl;
            T_fee=70000;
            cout<<"the total fee for f.SC ENGINEERING is:\t\t"<<T_fee<<endl;}
          else  if(choiceA==3){
            cout<<"*********************************************************"<<endl<<
                      "THE INFORMATION ABOUT ICS AS"<<endl<<
            "*********************************************************"<<endl<<
            "/////////////////////////SUBJECT///////////////////////////"<<endl<<
            "1:COMPUTER"<<endl<<
            "2:MATHEMATICS"<<endl<<
            "3:PHYSICS OR STATISTICS OR ECONOMICS"<<endl;
            cout<<"FEE RECOMMENDED FOR ICS "<<endl<<
            "Registeration Fee\t\t\t4500"<<endl<<
            "Tution Fee\t\t\t\t18000"<<endl<<
            "Liberary Fee\t\t\t\t2500"<<endl<<
            "Security Fee\t\t\t\t1000"<<endl;
            T_fee=68000;
            cout<<"the total fee for ICS is:\t\t"<<T_fee<<endl;}
          else  if(choiceA==4){
            cout<<"*********************************************************"<<endl<<
                      "THE INFORMATION ABOUT I.COM AS"<<endl<<
            "*********************************************************"<<endl<<
            "/////////////////////////SUBJECT///////////////////////////"<<endl<<
            "1:PRINCIPLE OF ACCOUNTING"<<endl<<
            "2:BUSINESS MATH"<<endl<<
            "3:PRINCIPLE OF COMMERCE"<<endl;
            cout<<"FEE RECOMMENDED FOR I.COM"<<endl<<
            "Registeration Fee\t\t\t4500"<<endl<<
            "Tution Fee\t\t\t\t18000"<<endl<<
            "Liberary Fee\t\t\t\t2500"<<endl<<
            "Security Fee\t\t\t\t1000"<<endl;
            T_fee=55000;
            cout<<"the total fee for I.COM is:\t\t"<<T_fee<<endl;}
           else{
            cout<<"*********************************************************"<<endl<<
                      "THE INFORMATION ABOUT F.A (IT) AS"<<endl<<
            "*********************************************************"<<endl<<
            "/////////////////////////SUBJECT///////////////////////"<<endl<<
            "1:COMPUTER"<<endl<<
            "2:ECONOMICS"<<endl<<
            "3:PHYSICS"<<endl;
            cout<<"FEE RECOMMENDED FOR F.A (IT)"<<endl<<
            "Registeration Fee\t\t\t4500"<<endl<<
            "Tution Fee\t\t\t\t18000"<<endl<<
            "Liberary Fee\t\t\t\t2500"<<endl<<
            "Security Fee\t\t\t\t1000"<<endl;
            T_fee=40000;
            cout<<"the total fee for f.A is:\t\t"<<T_fee<<endl;}
            char choiceC;
            cout<<"Are you take addmission y/n:"<<endl;
            cin>>choiceC;
            if(choiceC=='y'){
            goto disc;}
            else{
                goto menu;
            }
            system("cls");
            break;
    disc:
    cout<<"####################################################################"<<endl<<
          "####\t\tFEE DISCOUNT ON SCHOLARSHIP\t\t\t####"<<endl<<
          "####################################################################"<<endl<<endl;
 
          cout<<"total discount for >=950 marks:"<<endl<<
                "60% discount for <950 to >=800:"<<endl<<
                "50% discout  for <800 to >=750:"<<endl<<
                "no discount for <750:"<<endl<<endl;
 
          int mrk;
              cout<<"enter your marks:"<<endl;
              cin>>mrk;
              if(mrk>=950){
                   T_fee=10;
                   cout<<"your total fee is:"<<T_fee<<endl<<endl;}
                   else if(mrk<950 && mrk >=800){
                        discount=T_fee*60/100;
                    T_fee=T_fee - discount;
                   cout<<"your total discount is:"<<discount<<endl;
                    cout<<"your total fee is:"<<T_fee<<endl<<endl;
                     }
                    else if(mrk<800 && mrk>=750){
                            discount=T_fee*50/100;
                        T_fee=T_fee - discount;
                        cout<<"your discount is:"<<discount<<endl;
                        cout<<"your total fee is:"<<T_fee<<endl<<endl;
 
                    }
                    else {
                        discount=0;
                        cout<<"you are not selected for discount:"<<endl;
                        cout<<"your total fee is:"<<T_fee<<endl<<endl;}
 
                        char choiceB;
                        cout<<"Are you want to fill admission form y/n:"<<endl;
                        cin>>choiceB;
                        if(choiceB=='y'){
                        goto dataentry;}
                        else{
                        goto menu;
                            }
 
case 2:
     dataentry:
         system("cls");
         system("COLOR 6B");
         cout<<"#############################################################"<<endl<<
               "#####\t\tDATA ENTRY FOR ADMISSION\t\t#####"<<endl<<
               "#############################################################"<<endl;
check:
    cout<<endl<<endl;
    getline(cin,s.name);
    name:
    cout<<"NAME of student: ";
    getline(cin,s.name);
    for(a=0; a<s.name.size();){
    if(isalpha(s.name[a])&&s.name.size()>3)a++;
 
    else
        break;}
 
    if(a!=s.name.size() ||  s.name.size()>8){
        cout<<"\t invalid please enter letter"<<endl;
        goto name;}
    cout<<"enter the father name:"<<endl;
    getline(cin,s.f_name);
    cout<<"The address of studnt:"<<endl;
    getline(cin,s.address);
    cout<<"Enter parmanent address:"<<endl;
    getline(cin,s.par_addr);
    cout<<"The CNIC of student:"<<endl;
    getline(cin,s.CNIC);
    cout<<"The date of birth of student:"<<endl;
    getline(cin,s.DOB);
    cout<<"The class of student:"<<endl;
    getline(cin,s.cless);
    cout<<"The gender of student:"<<endl;
    getline(cin,s.gender);
    group:
    cout<<"Enter your Blood group=";
    getline(cin,s.b_group);
    for(a=0; a<s.b_group.size();){
    if(isalpha(s.b_group[a])&&s.b_group.size()>=1)a++;
 
    else
        break;}
 
    if(a!=s.b_group.size() ||  s.b_group.size()>=4){
        cout<<"\t invalid please enter letter"<<endl;
        goto group;}
    cout<<"The father CNIC of student"<<endl;
    getline(cin,s.f_CNIC);
    cout<<"Enter your phone number:"<<endl;
    getline(cin,s.p_no);
    cout<<"Enter your Email:"<<endl;
    getline(cin,s.eml);
    mmm:
    cout<<"Enter marks of matric:"<<endl;
    getline(cin,s.m_marks);
    for(a=0; a<s.name.size();){
    if(isdigit(s.m_marks[a])&&s.m_marks.size()<=9)a++;
 
    else
        break;}
 
    if(a!=s.m_marks.size() ||  s.m_marks.size()>10){
        cout<<"\t invalid please enter digit"<<endl;
        goto mmm;}
    cout<<"Enter the passing year:"<<endl;
    getline(cin,s.p_year);
    cout<<"Enter the board:"<<endl;
    getline(cin,s.board);
    cout<<"Enter Total monthly income of your Father=";
    cin>>s.m_income;
    cout<<endl<<endl;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<":::::::::::::::::::::::::ADMISSION FORM :::::::::::::::::::::::::"<<endl;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"**********************************************************************"<<endl;
    cout<<"Name::"<<s.name<<"\t"<<"Father_name::"<<s.f_name<<endl<<
    "__________________________________________________________________________"<<endl<<
    "Father's CNIC::"<<s.f_CNIC<<"\t"<<"Date-of-Birth::"<<s.DOB<<endl<<
    "__________________________________________________________________________"<<endl<<
    "Class::"<<s.cless<<"\t"<<"Gender(Male/Female)::"<<s.gender<<endl<<
    "__________________________________________________________________________"<<endl<<
    "Phone Number::"<<s.p_no<<"\t"<<"Email Address::"<<s.eml<<endl<<
    "__________________________________________________________________________"<<endl<<
    "Address::"<<s.address<<endl<<
    "__________________________________________________________________________"<<endl<<
    "Parmanent Address::"<<s.par_addr<<endl<<
    "__________________________________________________________________________"<<endl<<
    "Monthly income::"<<s.m_income<<"\t"<<"Blood Group::"<<s.b_group<<endl<<
    "__________________________________________________________________________"<<endl<<
    "***************************PREVIOUS RECORD***********************"<<endl<<
    "*MATRICULATION=\tPrevious Year::"<<s.p_year<<"\tMarks::"<<s.m_marks<<"\tBoard::"<<s.board<<"\t*"<<endl<<
    "****************************************************************************";
    cout<<"Are you want to going at teachers info"<<endl;
    cout<<"Are you want to go at Teachers Record"<<endl;
            cout<<"1:Yes"<<endl;
            cout<<"2:No"<<endl;
            cout<<"Enter Your Choice Please[1_2]=";
            cin>>choice;
            if(choice==1){
                goto pass;
            }
            else{
                goto menu;
            }
 
    system("cls");
    system("COLOR 69");
case 3:
    system("COLOR B6");
    system("COLOR 20");
    pass:
    cout<<"1: for student:"<<endl;
    cout<<"2: for admin:"<<endl;
    cout<<"enter your selection:";
    cin>>select;
    if(select==1){
    string nam1,pasw1;
    string name1="student",password1="123";
    cout<<"the student enter name1=student and password=123:"<<endl;
    cout<<"enter your name:"<<endl;
    cin>>nam1;
    cout<<"enter your password:"<<endl;
    cin>>pasw1;
    if(nam1=="Admin" && pasw1=="123"){
    cout<<"\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl<<
          "\t\t%%%%%%%%%%%%%%%%%%%%COLLEGE ADMINISTRATOR%%%%%%%%%%%%%%%%%%%%%%"<<endl<<
          "\t\t%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"\t**********************************************************************"<<endl<<
          "\t**********************************************************************"<<endl<<
          "\t*                                                                    *"<<endl<<
          "\t*Principal:\t\tMs.Tahra Zaya\tAssociate Professor(Chemistery)"<<"*"<<
          "\t*Wise-Principal:\tMs.Najma Hammad\tAssisstent professor(Physics)"<<"*"<<endl<<
          "\t*                                                                    *"
          "\t\t**********************************************************************"<<endl<<
          "\t**********************************************************************";
          Sleep(6000);
system("Cls");
    cout<<"\t\t***********************************************************"<<endl<<
    "\t\t___________________________________________________________"<<endl<<endl<<
      "\t\t\t\tTEACHERS INFORMATION WITH SUBJECT\t\t\t\t"<<
      "___________________________________________________________"<<endl<<
          "\t\t***********************************************************"<<endl<<endl<<endl;
  cout<<"\t********************Economics****************************"<<endl;
  cout<<"\t*Ms.Sobia\tM.A(Economics),M.ed\tLecturer"<<"\t*"<<endl;
  cout<<"\t*******************Physics*******************************"<<endl;
  cout<<"\t*Ms.Najma\tM.Sc(physics)\tAssisstent professor"<<"\t*"<<endl;
  cout<<"\t*******************Chemistry*****************************"<<endl;
  cout<<"\t*Mr.Waqas\tM.Sc(Chemistry)\tLecturer"<<"\t\t*"<<endl;
  cout<<"\t***********************Biology***************************"<<endl;
  cout<<"\t*(1)Ms.Sadia\tM.sc(Biology)\tLecturer"<<"\t\t*"<<endl;
  cout<<"\t*(2)Mr.Younas\tM.sc(Biology)\tAssisstent Professor"<<"\t*"<<endl;
  cout<<"\t***********************Mathematics***********************"<<endl;
  cout<<"\t*Ms.Aneeqa(B.Sc(Hons))\t\tLecture"<<"\t\t\t*"<<endl;
  cout<<"\t***********************Statistics************************"<<endl;
  cout<<"\t*Ms.Adiba\tM.sc(Statistics)\tLecturer"<<"\t*"<<endl;
  cout<<"\t***********************English***************************"<<endl;
  cout<<"\t*(1)Ms.Shazia \tM.A(English),B.Ed\tLecturer"<<"\t*"<<endl;
  cout<<"\t*(2)Ms.Kiran Fatima\tM.A(English)\tLecturer"<<"\t*"<<endl;
  cout<<"\t*(3)Mr.Arfan\tM.A(English),M.Ed\tLecturer"<<"\t*"<<endl;
  cout<<"\t*************************Urdu****************************"<<endl;
  cout<<"\t*1:Ms.Shabana\tM.A(Urdu),M.Ed"<<"\t\t\t\t*"<<endl;
  cout<<"\t*2:Ms.Nasira\tM.A(Urdu)\tAssisstent Professer"<<"\t*"<<endl;
  cout<<"\t************************Islamiyat************************"<<endl;
  cout<<"\t*1:Mr.Abu-Bakar\tM.A(islamiyat)"<<"\t\t\t\t*"<<endl;
  cout<<"\t*2:Mr.Ali\tM.A(Islamiyat)\tLecturer"<<"\t\t*"<<endl;
  cout<<"\t*************************Computer************************"<<endl;
  cout<<"\t*Mr.Nadeem\tM.Sc(Computer Science)\tProfessor"<<"\t*"<<endl;
  cout<<"\t*************************Education***********************"<<endl;
  cout<<"\t*Ms.Sehnaz\tM.A(Education)\tLecturer"<<"\t\t*"<<endl;
  cout<<"\t*************************Physical Education**************"<<endl;
  cout<<"\t*\t\t\tNeed A Lecturer"<<"\t\t\t*"<<endl;
  cout<<"\t**************************History************************"<<endl;
  cout<<"\t*Ms.Sadia Tufail\tM.A(History)\tLecturer"<<"\t*"<<endl;
  cout<<"\t**************************Accounting*********************"<<endl;
  cout<<"\t*Mr.Shahid\tM.Sc(Accounting)\tProfessor"<<"\t*"<<endl;
  cout<<"\t**************************Commerce***********************"<<endl;
  cout<<"\t*Mr.Kamran\tM.com\tLecturer"<<"\t\t\t*"<<endl;
  cout<<"\t***************************Pak_Study*********************"<<endl;
  cout<<"\t*Mr.Naseer\tM.A(History)\tProfessor"<<"\t\t*"<<endl;
  cout<<"\t*********************************************************"<<endl;
  cout<<endl<<endl;
  Sleep(10000);
  system("Cls");
  cout<<"\t*********************************************************"<<endl;
  cout<<"\t_________________________________________________________"<<endl;
  cout<<"\t\t\tOther Staff Members"<<endl;
  cout<<"\t_________________________________________________________"<<endl;
  cout<<"\t*********************************************************"<<endl;
  cout<<"Liberary Staff:\t\t1::Ms.Shabana Naseem(incharge)"<<endl<<
        "\t\t\t2::Ms.Noreen Aslam\t(Library Clerk)"<<endl<<endl<<
        "Office Members:\t\t(1)Arshad Ali\tHead Of Clerk"<<endl<<
        "\t\t\t(2)Latif Ahmad\tSenior Clerk"<<endl<<
        "\t\t\t(3)Asad Ali \tJunior Clerk"<<endl<<
        "\t\t\t(4)Mian Umar \tJunior Clerk"<<endl<<endl;
        Sleep(8000);
        system("cls");
  cout<<"Lecturer Assisstent:\t\tMs.Shaista Banu"<<endl<<endl;
  cout<<"Liberary Attendent:\t\t(1)Muhammad Ali"<<endl<<
        "\t\t\t\t(2)Farzana"<<endl<<
        "\t\t\t\t(3)Taiba"<<endl<<
        "\t\t\t\t(4)Rukhsana"<<endl<<
        "\t\t\t\t(5)Najma"<<endl<<endl;
        Sleep(9000);
        system("Cls");
  cout<<"Office Attendent:\t\t(1)Shabir Ahmad"<<endl<<
        "\t\t\t\t(2)Naseer Ghundal"<<endl<<endl;
        Sleep(5000);
        system("Cls");
  cout<<"Purchase Committe:\t\t(1)Ms.Tahra Zaya Principal (Chairperson)"<<endl<<
        "\t\t\t\t(2)Ms.Najma Wise-Principal (Member)"<<endl<<
        "\t\t\t\t(3)Ms.Shazia Rasheed"<<endl<<
        "\t\t\t\t(4)Incharge of Relevant Fields"<<endl<<endl<<endl;
        Sleep(5000);
        system("Cls");
  cout<<"Addmission Committee:\t(1)Ms.Najma Hammad(incharge science group)"<<endl<<
        "\t\t\t\(2)Ms.Shazia Rasheed(incharge Arts group)"<<endl<<
        "\t\t\t(3)Mr.Kamran"<<endl<<
        "\t\t\t(4)Mr.Waqas"<<endl<<
        "\t\t\t(5)Mr.Abu-Bakar"<<endl<<
        "\t\t\t(6)Mr.Ashraf Iqbal"<<endl<<endl<<endl;
        Sleep(8000);
        system("Cls");
  cout<<"Examination Incharge::\t\t1:Mr.Nadeem(controllar)"<<endl<<
        "\t\t\t\t2:Ms.Noor Fatima (Assisstent Controller)"<<endl<<
        "\t\t\t\t3:Mr.Kamran"<<endl<<endl<<endl<<
        "Subject Change Incharge::1:Mr.Kamran(incharge)"<<endl<<
        "\t\t\t\t2:Ms.Shahnaz"<<endl<<endl<<endl<<
        "Time-Table-Incharge::\t\tMr.Abu-Bakar"<<endl<<endl<<endl;
        "Dispensary Incharge::\t\tMs.Aqsa";}
        else{
            cout<<"retry your password:";
            goto pass;
        }
 
    }
else{
 
 
        pass2:
        string nam2,pasw2;
        string name2="Z",password2="12";
        cout<<"enter the name:";
        cin>>nam2;
        cout<<"enter password:";
        cin>>pasw2;
        if(nam2=="Teacher" && pasw2=="123"){
        cout<<"**************************************************************"<<endl<<
              "**************************************************************"<<endl<<
              "************************SALARY OF TEACHERS********************"<<endl<<
              "**************************************************************"<<endl<<
              "**************************************************************"<<endl;
              cout<<"salary for economics  department's teachers:"<<endl;
              int salary1;
              int EC_perlec=500;
              int E_nolec=22;
              salary1=EC_perlec*E_nolec;
              cout<<"Salary="<<salary1<<endl;
              cout<<"Total Teacher's of Economics=1"<<endl;
              cout<<"The salary of All Economics teacher:"<<salary1*1<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for chemistry  department's teachers:"<<endl;
              int salary2;
              int CH_perlec=800;
              int CH_nolec=26;
              salary2=CH_perlec*CH_nolec;
              cout<<"Salary="<<salary2<<endl;
              cout<<"Total Teacher's of Chemistry=1"<<endl;
              cout<<"the salary of All CHEMISTRY teacher:"<<salary2*1<<endl<<endl;
              Sleep(7000);
 
 
              cout<<"salary for Biology    department's teachers:"<<endl;
              int salary3;
              int BIO_perlec=800;
              int B_nolec=24;
              salary3=BIO_perlec*B_nolec;
              cout<<"Salary="<<salary3<<endl;
              cout<<"Total Teacher's of Biology=2"<<endl;
              cout<<"the salary of All BIOLOGY teacher:"<<salary3*2<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for physics    department's teachers:"<<endl;
              int salary4;
              int PHY_perlec=800;
              int P_nolec=25;
              salary4=PHY_perlec*P_nolec;
              cout<<"Salary="<<salary4<<endl;
              cout<<"Total Teacher's of Physics=1"<<endl;
              cout<<"the salary of All PHYSICS teacher:"<<salary4*1<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for Math       department's teachers:"<<endl;
              int salary5;
              int MATH_perlec=900;
              int M_nolec=28;
              salary5=MATH_perlec*M_nolec;
              cout<<"Salary="<<salary5<<endl;
              cout<<"Total Teacher's of Math=1"<<endl;
              cout<<"the salary of All MATH teachers:"<<salary5*1<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for IslamiYat  department's teachers:"<<endl;
              int salary6;
               int ISL_perlec=500;
              int I_nolec=10;
              salary6=ISL_perlec*I_nolec;
              cout<<"Salary="<<salary6<<endl;
              cout<<"Total Teacher's of Islamiyat=2"<<endl;
              cout<<"the salary of All ISLAMIYAT teachers:"<<salary6*2<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for pak_study  department's teachers:"<<endl;
              int salary7;
              int PAK_perlec=500;
              int PK_nolec=10;
              salary7=PAK_perlec*PK_nolec;
              cout<<"Salary="<<salary7<<endl;
              cout<<"Total Teacher's of Pak_Study=1"<<endl;
              cout<<"the salary of All PAKSTUDY teachers:"<<salary7*2<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for Accounting department's teachers:"<<endl;
              int salary8;
              int ACC_perlec=600;
              int A_nolec=23;
              salary8=ACC_perlec*A_nolec;
              cout<<"Salary="<<salary8<<endl;
              cout<<"Total Teacher's of Accounting=2"<<endl;
              cout<<"the salary of All ACCOUNTING teachers:"<<salary8*2<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for Computer   department's teachers:"<<endl;
              int salary9;
              int COMP_perlec=950;
              int C_nolec=25;
              salary9=COMP_perlec*C_nolec;
              cout<<"Salary="<<salary9<<endl;
              cout<<"Total Teacher's of Computer=1"<<endl;
              cout<<"the salary of All COMPUTER teachers:"<<salary9*1<<endl<<endl;
              Sleep(7000);
 
              cout<<"10:salary for English   department's teachers:"<<endl;
              int salary10;
              int ENG_perlec=750;
              int no_lec=20;
              salary10=ENG_perlec*no_lec;
              cout<<"Salary="<<salary10<<endl;
              cout<<"Total Teacher's of English=3"<<endl;
              cout<<"the salary of All ENGLISH teachers:"<<salary10*3<<endl<<endl;
              Sleep(7000);
 
              cout<<"11:salary for Education  department's teachers:"<<endl;
              int salary11;
              int EDU_perlec=500;
              int ED_nolec=22;
              salary11=EDU_perlec*ED_nolec;
              cout<<"Salary="<<salary11<<endl;
              cout<<"Total Teacher's of Education=1"<<endl;
              cout<<"the salary of All EDUCATION teachers:"<<salary11*1<<endl<<endl;
              Sleep(7000);
 
              cout<<"12:salary for P_Education department's teachers:"<<endl;
              int salary12;
              int PEDU_perlec=500;
              int PED_nolec=24;
              salary12=PEDU_perlec*PED_nolec;
              cout<<"Salary="<<salary12<<endl;
              cout<<"Total Teacher's of Physical_Education=1"<<endl;
              cout<<"the salary of All PHY_EDUCATION teachers:"<<salary12*1<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for Urdu      department's teachers:"<<endl;
              int salary13;
              int URDU_perlec=500;
              int U_nolec=24;
              salary13=URDU_perlec*U_nolec;
              cout<<"Salary="<<salary13<<endl;
              cout<<"Total Teacher's of Urdu=2"<<endl;
              cout<<"the salary of All URDU teachers:"<<salary13*2<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for Commerce  department's teachers:"<<endl;
              int salary14;
              int COM_perlec=650;
              int CM_nolec=25;
              salary14=COM_perlec*CM_nolec;
              cout<<"Salary="<<salary14<<endl;
              cout<<"Total Teacher's of Commerce=1"<<endl;
              cout<<"the salary of All COMMERCE teachers:"<<salary14*1<<endl<<endl;
              Sleep(7000);
 
              cout<<"salary for History   department's teachers:"<<endl;
              int salary15;
              int HIS_perlec=500;
              int H_nolec=20;
              salary15=HIS_perlec*H_nolec;
              cout<<"Salary="<<salary15<<endl;
              cout<<"Total Teacher's of History=1"<<endl;
              cout<<"the salary of  HISTORY teachers:"<<salary15*1<<endl<<endl;
              Sleep(7000);
 
              cout<<"16:salary for Statistics department's teachers:"<<endl;
              int salary16;
              int STAT_perlec=750;
              int S_nolec=24;
              salary16=STAT_perlec*S_nolec;
              cout<<"Salary="<<salary16<<endl;
              cout<<"Total Teacher's of Statistics=1"<<endl;
              cout<<"the salary of All STATISTICS teachers:"<<salary16*1<<endl<<endl;
              }
        else{
            system("Cls");
                cout<<"Please check your name and password again"<<endl;
            goto pass2;}
             Sleep(7000);
 
            cout<<"Are you want to go at time"<<endl;
            cout<<"1:Yes"<<endl;
            cout<<"2:No"<<endl;
            cout<<"Enter Your Choice Please[1_2]=";
            cin>>choice;
            if(choice==1){
                goto time;
            }
            else{
                goto menu;
            }
}
break;
 
 
  case 4:
 
      cout<<"\t\t**************TIME SECHDULE****************"<<endl;
      time:
      cout<<"1:Medical"<<endl;
      cout<<"2:Fsc pre_Engineering"<<endl;
      cout<<"3:Ics"<<endl;
      cout<<"4:I.com"<<endl;
      cout<<"5:F.A"<<endl;
      cout<<"6:Are you Want to See All Class Time Sechdule"<<endl;
      cout<<"Enter your Class Number[1_7]=";
      cin>>choice;
      if(choice==1){
    cout<<"********************************F.sc Medical********************************"<<endl;
 
    cout<<"\t\t                        DAY TIME  IS                  "<<endl;
    cout<<endl<<endl;
    cout<<"                        FSC PRE MEDICAL               "<<endl;
    cout<<endl<<endl;
    cout<<" TIME  :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00   12:00-12:45  12:45-01:30"<<endl;
    cout<<" MONDAY::    ENG        BIO           ___          BREAK         ISLAMIYAT    CHEMISTRY "<<endl;
    cout<<endl<<endl;
    cout<<" TIME   :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" TUESDAY::   PHYSICS       URDU       CHEMISTRY      BREAK        CHEMISTRY        ___  "<<endl;
    cout<<endl<<endl;
    cout<<" TIME     :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" WEDNESDAY::     BIO          ENG        PHYSICS        BREAK        ___         ISLAMIYAT"<<endl;
    cout<<endl<<endl;
    cout<<" TIME    :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" THURSDAY::  CHEMISTRY        BIO         URDU          BREAK     ISLAMIYAT         ENG  "<<endl;
    cout<<endl<<endl;
    cout<<" TIME  :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" FRIDAY::  PHYSICS         ENG         ___              BREAK     PHYSICS       BIO    "<<endl;
    cout<<endl<<endl;
    cout<<"*********************************************"<<endl;
    cout<<endl<<endl;
    int choice;
    cout<<"Are you want to go back "<<endl<<endl;
    cout<<"1:Main Menu"<<endl;
    cout<<"2:Time schedule"<<endl;
    cout<<"enter your choice please[1_2]=";
    cin>>choice;
    if(choice==1){
        goto menu;
    }
    else{
        goto time;
    }
 
      }
      else if(choice==2){
    cout<<"*********************************F.cs(pre_engineering)*******************************"<<endl;
    cout<<"\t\t                  DAY TIME IS                         "<<endl;
    cout<<endl<<endl;
    cout<<"                  FSC PRE ENGINGEERING                "<<endl;
    cout<<endl<<endl;
    cout<<" TIME  :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" MONDAY::   MATH        ISLAMIYAT       ENG          BREAK      CHEMISTRY         ___  "<<endl;
    cout<<endl<<endl;
    cout<<" TIME   :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" TUESDAY::     URDU       PHYSICS     ISLAMIYAT       BREAK        ___           ENG    "<<endl;
    cout<<endl<<endl;
    cout<<" TIME     :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" WEDNESDAY::    MATH         URDU       CHEMISTRY     BREAK        PHYSICS          ____  "<<endl;
    cout<<endl<<endl;
    cout<<" TIME    :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" THURSDAY::  ISLAMIYAT      PHYSICS       ENG         BREAK         ___        CHEMISTRY "<<endl;
    cout<<endl<<endl;
    cout<<" TIME  :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" FRIDAY::    ENG           URDU        PHYSICS        BREAK         ___          MATH  "<<endl;
    cout<<endl<<endl;
 
    int choice;
    cout<<"Are you want to go back "<<endl<<endl;
    cout<<"1:Main Menu"<<endl;
    cout<<"2:Time schedule"<<endl;
    cout<<"enter your choice please[1_2]=";
    cin>>choice;
    if(choice==1){
        goto menu;
    }
    else{
        goto time;
    }
 
 
      }
      else if(choice==3){
        cout<<"*****************************Ics************************************"<<endl;
    cout<<"\t\t             DAY TIME IS                              "<<endl<<endl;
    cout<<endl<<endl;
    cout<<"                 I  C  S                               "<<endl;
    cout<<endl<<endl;
    cout<<" TIME  :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" MONDAY::  COMPUTER        MATH      ISLAMIYAT        BREAK       URDU           ___   "<<endl;
    cout<<endl<<endl;
    cout<<" TIME   :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" TUESDAY::     ENG        COMPUTER      MATH          BREAK     STATISTICS     COMPUTER "<<endl;
    cout<<endl<<endl;
    cout<<" TIME     :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" WEDNESDAY::     URDU      ISLAMIYAT       MATH        BREAK         ___           ENG    "<<endl;
    cout<<endl<<endl;
    cout<<" TIME    :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" THURSDAY::    MATH      STATISTICS    ISLAMIYAT       BREAK        ENG            ____  "<<endl;
    cout<<endl<<endl;
    cout<<" TIME   :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<"  FRIDAY::  STATISTICS    ISLAMIYAT      MATH          BREAK        URDU      STATISTICS"<<endl;
    cout<<endl<<endl;
    int choice;
 
    cout<<"Are you want to go back "<<endl<<endl;
    cout<<"1:Main Menu"<<endl;
    cout<<"2:Time schedule"<<endl;
    cout<<"enter your choice please[1_2]=";
    cin>>choice;
    if(choice==1){
        goto menu;
    }
    else{
        goto time;
    }
 
      }
      else if(choice==4){
        cout<<"************************************i.com**************************************"<<endl;
    cout<<"\t\t                DAY TIME IS                          "<<endl;
    cout<<endl<<endl;
    cout<<"                I.COM                                "<<endl;
    cout<<endl<<endl;
    cout<<" TIME  :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" MONDAY::    URDU          ENG        B.MATH         BREAK      COMMERCE        ____   "<<endl;
    cout<<endl<<endl;
    cout<<" TIME   :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" TUESDAY::  ACCOUNTING   ISLAMIYAT       URDU        BREAK        ___         ECONOMICS "<<endl;
    cout<<endl<<endl;
    cout<<" TIME     :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" WEDNESDAY::     ENG        B.MATH         ___       BREAK         ISLAMIYAT    ACCOUNTING"<<endl;
    cout<<endl<<endl;
    cout<<" TIME    :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" THURSDAY::     ENG       COMMERCE      B.MATH       BREAK         ACCOUNTING     ___    "<<endl;
    cout<<endl<<endl;
    cout<<" TIME  :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" FRIDAY::   B.MATH      ECONOMICS       ENG          BREAK        URDU        ISLAMIYAT"<<endl;
    cout<<endl<<endl;
    int choice;
    cout<<"Are you want to go back "<<endl<<endl;
    cout<<"1:Main Menu"<<endl;
    cout<<"2:Time schedule"<<endl;
    cout<<"enter your choice please[1_2]=";
    cin>>choice;
    if(choice==1){
        goto menu;
    }
    else{
        goto time;
    }
 
 
      }
else if(choice==5){
    cout<<"*********************************F.A IT**************************************"<<endl;
    cout<<"\t\t          DAY TIME IS                     "<<endl;
    cout<<endl<<endl;
    cout<<"           F. A IT                         "<<endl;
    cout<<endl<<endl;
    cout<<" TIME  :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" MONDAY::  HIST/P.EDU   ECONOMICS    COMPUTER        BREAK         ENG          ___    "<<endl;
    cout<<endl<<endl;
    cout<<" TIME   :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" TUESDAY::  ECONOMICS       ENG       HIST/P.EDU     BREAK         URDU       ISLAMIYAT "<<endl;
    cout<<endl<<endl;
    cout<<" TIME     :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" WEDNESDAY::  ISLAMIYAT    COMPUTER        ENG         BREAK         URDU           ___   "<<endl;
    cout<<endl<<endl;
    cout<<" TIME    :: 08:30-09:15  09:15-10:30  10:30-11:15   11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" THURSDAY::    URDU       ECONOMICS    COMPUTER        BREAK     HIST/P.EDU       ___    "<<endl;
    cout<<endl<<endl;
    cout<<" TIME  :: 08:30-09:15  09:15-10:30  10:30-11:15    11:15-12:00  12:00-12:45  12:45-01:30"<<endl;
    cout<<" FRIDAY::  ISLAMIYAT     COMPUTER    COMPUTER         BREAK         ENG          ___    "<<endl;
    cout<<endl<<endl;
    cout<<"              END  CLASS DAY                 "<<endl;
    cout<<endl<<endl;
    cout<<"*********************************************"<<endl;
    cout<<endl<<endl;
    int choice;
    cout<<"Are you want to go back "<<endl<<endl;
    cout<<"1:Main Menu"<<endl;
    cout<<"2:Time schedule"<<endl;
    cout<<"enter your choice please[1_2]=";
    cin>>choice;
    if(choice==1){
        goto menu;
    }
    else{
        goto time;
    }
 
 
 
}
else if(choice==6){
            cout<<"********************************"<<endl;
        cout<<endl<<endl;
        cout<<"           CLASS TIME            "<<endl;
        cout<<endl<<endl;
        cout<<"********************************"<<endl;
        cout<<endl<<endl;
        cout<<"           FIRST LACTURE        "<<endl;
        cout<<endl<<endl;
        cout<<"             8:30_9:45          "<<endl;
        cout<<endl<<endl;
        cout<<"           SECOND LACTURE       "<<endl;
        cout<<endl<<endl;
        cout<<"             9:45_10:30         "<<endl;
        cout<<endl<<endl;
        cout<<"           THIRD  LACTURE       "<<endl;
        cout<<endl<<endl;
        cout<<"             10:30_11:15        "<<endl;
        cout<<endl<<endl;
        cout<<"               BREAK            "<<endl;
        cout<<endl<<endl;
        cout<<"            11:15_12:00         "<<endl;
        cout<<endl<<endl;
        cout<<"          FOURTH LACTURE         "<<endl;
        cout<<endl<<endl;
        cout<<"          12:00_12:45           "<<endl;
        cout<<endl<<endl;
        cout<<"         FIFTH LACTURE          "<<endl;
        cout<<endl<<endl;
        cout<<"          12:45_1:30            "<<endl;
        cout<<endl<<endl;
        cout<<"********************************"<<endl;
        cout<<endl<<endl;
        cout<<"********************************"<<endl;
        cout<<endl<<endl;
        cout<<"             END CLASS TIME     "<<endl;
        cout<<endl<<endl;
        cout<<"********************************"<<endl;
        cout<<endl<<endl;
        int choice;
    cout<<"Are you want to go back "<<endl<<endl;
    cout<<"1:Main Menu"<<endl;
    cout<<"2:Time schedule"<<endl;
    cout<<"enter your choice please[1_2]=";
    cin>>choice;
    if(choice==1){
        goto menu;
    }
    else{
        goto time;
    }
 
}
     }
     }
    else{
        cout<<"You are not Login"<<endl;
        cout<<"please check your name and password again"<<endl;
        goto xyz;
    }
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

